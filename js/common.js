document.querySelector('form').addEventListener('submit', function (event) {
    event.preventDefault();
    let num = Number(document.getElementById('tnom').value);
    if (num <= 0) {
        alert("please enter a valid number for candidates")
    }
    else {
        localStorage.setItem('numCandidates', num)
        window.location.href = 'detailes.html'
        
    }
})