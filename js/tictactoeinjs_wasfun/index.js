
let cells = document.querySelectorAll('.cell');
let turn="X";
let currentturn=document.getElementById('curturn');
currentturn.textContent= turn;
let winconditions= [
    [0,1,2],
    [3,4,5],
    [6,7,8],
    [0,3,6],
    [6,7,8],
    [0,4,8],
    [2,4,6],
    [0,3,6],
    [1,4,7],
    [2,5,8]
]
//This will generate an event listener for every cell
cells.forEach(cell => {
    cell.addEventListener('click', function () {
        mark(cell);
    });
});
// The function below will restart the game by replacing all X and O's with ""
function restartgame() {
    cells.forEach(cell => {
        cell.textContent="";
        });
}
//This will just mark the cell
function mark(cell){
    if(cell.textContent!=""){
        Swal.fire(" This cell is already Marked!");
        return;
    }else{
        cell.textContent=turn;
        checkWin();
    }
    turn=="X"?turn="O":turn="X";
    currentturn.textContent=turn;
}
// This will check the winners everytime  its called after user marks some cell;
function checkWin(){
    winconditions.forEach(condition => {
        if(cells[condition[0]].innerHTML!="" && cells[condition[0]].innerHTML==cells[condition[1]].innerHTML && cells[condition[1]].innerHTML==cells[condition[2]].innerHTML)
            {
            Swal.fire(`Player ${cells[condition[0]].innerHTML} wins!`);
            restartgame();
            }

    });
    checkDraw();
}
/*
Checks for draw by converting cells into an arry( which isn't usually
 recognized by older browsers) and then continues to check if every 
 item in cells is not empty or not
*/
function checkDraw() {
    let isDraw = Array.from(cells).every(cell => cell.textContent != "");
    if (isDraw) {
        Swal.fire("It's a draw!");
        restartgame();
    }
}