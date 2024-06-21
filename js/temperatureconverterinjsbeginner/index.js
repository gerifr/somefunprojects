let convertedvalue;
let inputvalue;

document.getElementById("kelvinout").onclick=function(){
    inputvalue= Number(document.getElementById('valuein').value);
    if(document.getElementById('inkel').checked)
        {
            convertedvalue= inputvalue;
        }
        else if(document.getElementById('incel').checked){
            convertedvalue= inputvalue +273;
        }
        else{
            convertedvalue= (((inputvalue-32)/180)*100)+273;
        }
    document.getElementById('outputvalue').innerHTML=convertedvalue + " K";
    }

document.getElementById("celsiusout").onclick=function(){
    inputvalue= Number(document.getElementById('valuein').value);
    if(document.getElementById('inkel').checked)
        {
            convertedvalue= inputvalue-273;
        }
        else if(document.getElementById('incel').checked){
            convertedvalue= inputvalue;
        }
        else{
            convertedvalue= (((inputvalue-32)/180)*100);
        }
    document.getElementById('outputvalue').innerHTML=convertedvalue + " C";
    }

document.getElementById("fahout").onclick=function(){
    inputvalue= Number(document.getElementById('valuein').value);
    if(document.getElementById('inkel').checked)
        {
            convertedvalue= (((inputvalue-273)/100)*180)+32;
        }
        else if(document.getElementById('incel').checked){
            convertedvalue= ((inputvalue/100)*180)+32;
        }
        else{
            convertedvalue= inputvalue;
        }
    document.getElementById('outputvalue').innerHTML=convertedvalue + " F";
    }