function VerifyInputForm(){ // function cant be changed its a reserved key word, the rest can be submitdata etc
    // in this js code we have called th einput by ID not class


    // You can select any element with these JavaScript commands:
    let nameInput = document.getElementById("name");  //nameInput is a variable not a function
    let emailInput = document.getElementById("email");
    let phoneInput = document.getElementById("phone");
    let messageInput = document.getElementById("message");

    Flag = true;  // initialising a flag 
                 // Assume the form is valid unless we find an error


    // checking comparsions through 'if' conditions 
    if (nameInput.value === ""){  
        alert("Name is required!!");
        Flag = false;
    }

    if (emailInput.value === ""){
        alert("Email is required!!");
        Flag = false;
    }

    // only if these two conditions are true, only then we move to checking the email
    // thats why we will use "else if"

    else if (emailInput.value.indexOf("@") === -1){  // checking if @ is there in email
        alert("Please enter a valid email format!!");
        Flag = false;
    }

    if (phoneInput.value === ""){
        alert("Phone Number is required!!");
        Flag = false;
    }

    if (messageInput.value === ""){
        alert("Message is required!!");
        Flag = false;
    }

    if (Flag){
        alert("Form is submitted successfully! "); // this for the pop up message
        return true;
    }
    else{
        return false;
    }

}