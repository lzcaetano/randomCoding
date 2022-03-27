function calculatePI() {

    let num = document.getElementById("input").value;
    
    let dotQtd = num;
    let dotTotal = [];
    for (i = 0; i < dotQtd; i++) {
        dotTotal.push(Math.sqrt(Math.pow(Math.random(),2) + Math.pow(Math.random(),2)));
    } 

    let dotsInside = 0;
    for (let ctt = 0; ctt < num; ctt++) {
        if (dotTotal[ctt] <= 1) {
            dotsInside++
        }
    }

    let resultFinal = 4* dotsInside/num; 
    document.getElementById("output").value = resultFinal; 

}