let x,y,z,randvalue,max,min,diff;

document.getElementById('button').onclick = function(){

    x= Number(document.getElementById('input').value);
    y= Number(document.getElementById('min').value);
    z= Number(document.getElementById('max').value);
    max= Math.max(y,z);
    min= Math.min(y,z);
    diff= max - min;
    randvalue= Math.floor(Math.random()*diff + min);
    if(x==randvalue){
        alert('You guessed correct, the number was indeed:'+randvalue);
    }
    else{
            alert('You guessed wrong, the number was:'+randvalue);
        }

}