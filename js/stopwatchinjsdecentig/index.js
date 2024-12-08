const time= document.querySelector("#stopwatch");
const start= document.querySelector("#start");
const pause= document.querySelector("#pause");
const reset= document.querySelector("#reset");
let startTime= 0;
let elapsedtime= 0;
let currentTime= 0;
let paused= true;
let intervalid;
let hrs=0;
let mins=0;
let secs=0
let timeelapsed=0;

start.addEventListener("click", ()=>{
    if(paused){
        paused=false;
        startTime= Date.now();
        intervalid= setInterval(updatetime,75);
    }

});
pause.addEventListener("click", ()=>{
    if(!paused){
        paused=true;
        timeelapsed= Date.now() - startTime;
        clearInterval(intervalid);
    }
});
reset.addEventListener("click", ()=>{
    paused=true;
    startTime= 0;
    elapsedtime= 0;
    currentTime= 0;
    paused= true;
    hrs=0;
    mins=0;
    secs=0;
    timeelapsed=0;
    clearInterval(intervalid);
    time.textContent="00:00:00";
});
function updatetime(){
elapsedtime= Date.now() - startTime + timeelapsed;
secs=padding(Math.floor((elapsedtime/1000) % 60));
mins=padding(Math.floor((elapsedtime/(1000*60)) % 60));
hrs=padding(Math.floor((elapsedtime/(1000*60*60)) % 60));
time.textContent=`${hrs}:${mins}:${secs}`;
function padding(unit){
 return (("0") + unit).length> 2 ? unit : "0" + unit;
}

}