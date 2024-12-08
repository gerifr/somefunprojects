let computerchoicelist= ["Rock","Paper","Scissors"];
let playerchoice = null;
let rockchoice =document.getElementById("Rock");
let paperchoice =document.getElementById("Paper");
let scissorchoice =document.getElementById("Scissors");
let computerchoice=null;
rockchoice.addEventListener("click",()=>{
    playerchoice="Rock";
    Fight();
});
paperchoice.addEventListener("click",()=>{
    playerchoice="Paper";
    Fight();

});
scissorchoice.addEventListener("click",()=>{
    playerchoice="Scissors";
    Fight();

});

function Fight() {
    computerchoice= computerChoice()
    document.getElementById("plchoice").textContent=playerchoice;
    document.getElementById("cmchoice").textContent=computerchoice;
    if (
        (playerchoice === "Rock" && computerchoice === "Scissors") ||
        (playerchoice === "Paper" && computerchoice === "Rock") ||
        (playerchoice === "Scissors" && computerchoice === "Paper")
    ) {
        document.getElementById("result").textContent="Player Wins!";
    } else if (playerchoice === computerchoice) {

        document.getElementById("result").textContent="It's a tie!";

    } else {

        document.getElementById("result").textContent="Computer wins!";
    }
}
function computerChoice() {
    return computerchoicelist[Math.floor(Math.random() * computerchoicelist.length)];
}   