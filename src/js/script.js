// script.js
document.getElementById('contactForm').addEventListener('submit', function(event) {
    event.preventDefault(); // Prevent the form from submitting

    const name = document.getElementById('name').value.trim();
    const email = document.getElementById('email').value.trim();
    const message = document.getElementById('message').value.trim();
    const formMessage = document.getElementById('formMessage');

    formMessage.innerHTML = '';
    formMessage.style.color = 'red';

    if (name.length < 3) {
        formMessage.innerHTML += '<p>Name must be at least 3 characters long.</p>';
    }
    if (!validateEmail(email)) {
        formMessage.innerHTML += '<p>Please enter a valid email address.</p>';
    }
    if (message.length < 10) {
        formMessage.innerHTML += '<p>Message must be at least 10 characters long.</p>';
    }

    if (formMessage.innerHTML === '') {
        formMessage.innerHTML = '<p>Your message has been sent successfully!</p>';
        formMessage.style.color = 'green';
        document.getElementById('contactForm').reset();
    }
});

function validateEmail(email) {
    const re = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,6}$/;
    return re.test(String(email).toLowerCase());
}
function showImage(src) {
    const lightbox = document.getElementById('lightbox');
    const lightboxImg = document.getElementById('lightbox-img');
    lightboxImg.src = src;
    lightbox.style.display = 'flex';
}

function hideImage() {
    const lightbox = document.getElementById('lightbox');
    lightbox.style.display = 'none';
}
