/* Naziba Tabassum Portfolio Script */

document.addEventListener('DOMContentLoaded', () => {
    // 1. Mobile Menu Logic
    const menuBtn = document.getElementById('menu-btn');
    const mobileMenu = document.getElementById('mobile-menu');
    const menuOpenIcon = document.getElementById('menu-open-icon');
    const menuCloseIcon = document.getElementById('menu-close-icon');

    if (menuBtn && mobileMenu) {
        menuBtn.addEventListener('click', () => {
            mobileMenu.classList.toggle('hidden');
            menuOpenIcon.classList.toggle('hidden');
            menuCloseIcon.classList.toggle('hidden');
        });

        // Close menu on link click
        const mobileLinks = mobileMenu.querySelectorAll('a');
        mobileLinks.forEach(link => {
            link.addEventListener('click', () => {
                mobileMenu.classList.add('hidden');
                menuOpenIcon.classList.remove('hidden');
                menuCloseIcon.classList.add('hidden');
            });
        });
    }

    // 2. Intersection Observer for Reveal Logic
    const revealElements = document.querySelectorAll('.reveal');
    const observerOptions = {
        threshold: 0.1,
        rootMargin: '0px 0px -50px 0px'
    };

    const revealObserver = new IntersectionObserver((entries, observer) => {
        entries.forEach(entry => {
            if (entry.isIntersecting) {
                entry.target.classList.add('active');
                observer.unobserve(entry.target);
            }
        });
    }, observerOptions);

    revealElements.forEach(el => revealObserver.observe(el));

    // 3. Smooth Sticky Navbar Shadow
    const nav = document.querySelector('nav');
    window.addEventListener('scroll', () => {
        if (window.scrollY > 20) {
            nav.classList.add('border-b', 'border-white/10');
            nav.classList.remove('py-4');
            nav.classList.add('py-2');
        } else {
            nav.classList.remove('border-b', 'border-white/10');
            nav.classList.remove('py-2');
            nav.classList.add('py-4');
        }
    });

    // 4. Form Submission Mockup
    const contactForm = document.querySelector('form');
    if (contactForm) {
        contactForm.addEventListener('submit', (e) => {
            e.preventDefault();
            const submitBtn = contactForm.querySelector('button');
            const originalText = submitBtn.innerText;
            
            submitBtn.disabled = true;
            submitBtn.innerText = 'Sending...';
            
            // Artificial delay to mimic server response
            setTimeout(() => {
                submitBtn.innerText = 'Sent Successfully!';
                submitBtn.classList.remove('bg-primary');
                submitBtn.classList.add('bg-green-600');
                
                setTimeout(() => {
                    contactForm.reset();
                    submitBtn.innerText = originalText;
                    submitBtn.disabled = false;
                    submitBtn.classList.remove('bg-green-600');
                    submitBtn.classList.add('bg-primary');
                }, 3000);
            }, 1500);
        });
    }

    // 5. Active Link Highlight
    const sections = document.querySelectorAll('section[id]');
    const navLinks = document.querySelectorAll('nav a[href^="#"]');

    function highlightActiveLink() {
        let currentSectionId = '';
        sections.forEach(section => {
            const sectionTop = section.offsetTop;
            if (pageYOffset >= sectionTop - 100) {
                currentSectionId = section.getAttribute('id');
            }
        });

        navLinks.forEach(link => {
            link.classList.remove('text-primary');
            if (link.getAttribute('href') === `#${currentSectionId}`) {
                link.classList.add('text-primary');
            }
        });
    }

    window.addEventListener('scroll', highlightActiveLink);
});
