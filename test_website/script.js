/**
 * JS Functionality Setup
 */

document.addEventListener('DOMContentLoaded', () => {
    
    /* ==========================================
       SCROLL HEADER EFFECT
       ========================================== */
    const header = document.getElementById('header');
    
    const handleScroll = () => {
        if (window.scrollY > 50) {
            header.classList.add('scrolled');
        } else {
            header.classList.remove('scrolled');
        }
    };
    
    window.addEventListener('scroll', handleScroll);
    handleScroll(); // Init check

    /* ==========================================
       MOBILE NAVIGATION TOGGLE
       ========================================== */
    const mobileToggle = document.querySelector('.mobile-toggle');
    const navMenu = document.querySelector('.nav-menu');
    const navLinks = document.querySelectorAll('.nav-link');
    
    const toggleMenu = () => {
        const isExpanded = mobileToggle.getAttribute('aria-expanded') === 'true';
        mobileToggle.setAttribute('aria-expanded', !isExpanded);
        mobileToggle.classList.toggle('active');
        navMenu.classList.toggle('active');
        
        // Prevent body scroll when menu is open
        document.body.style.overflow = !isExpanded ? 'hidden' : '';
    };

    if (mobileToggle) {
        mobileToggle.addEventListener('click', toggleMenu);
    }
    
    // Close mobile menu when clicking a link
    navLinks.forEach(link => {
        link.addEventListener('click', () => {
            if (navMenu.classList.contains('active')) {
                toggleMenu();
            }
        });
    });

    /* ==========================================
       ACTIVE NAV LINK ON SCROLL (SPY)
       ========================================== */
    const sections = document.querySelectorAll('section[id]');
    
    const scrollActive = () => {
        const scrollY = window.pageYOffset;

        sections.forEach(current => {
            const sectionHeight = current.offsetHeight;
            const sectionTop = current.offsetTop - 100; // Offset for fixed header
            const sectionId = current.getAttribute('id');
            const navLink = document.querySelector(`.nav-list a[href*=${sectionId}]`);
            
            if(navLink) {
                if(scrollY > sectionTop && scrollY <= sectionTop + sectionHeight) {
                    navLink.classList.add('active');
                } else {
                    navLink.classList.remove('active');
                }
            }
        });
    };
    
    window.addEventListener('scroll', scrollActive);

    /* ==========================================
       INTERSECTION OBSERVER FOR ANIMATIONS
       ========================================== */
    
    // Fade In Elements
    const fadeElements = document.querySelectorAll('.fade-in');
    
    const fadeObserverOptions = {
        threshold: 0.1,
        rootMargin: "0px 0px -50px 0px"
    };
    
    const fadeObserver = new IntersectionObserver((entries, observer) => {
        entries.forEach(entry => {
            if (entry.isIntersecting) {
                entry.target.classList.add('appear');
                observer.unobserve(entry.target); // Only animate once
            }
        });
    }, fadeObserverOptions);
    
    fadeElements.forEach(el => fadeObserver.observe(el));
    
    // Progress Bar Animation
    const progressBars = document.querySelectorAll('.progress');
    
    const progressObserver = new IntersectionObserver((entries, observer) => {
        entries.forEach(entry => {
            if (entry.isIntersecting) {
                const targetWidth = entry.target.style.width;
                // Animate from 0 to target width
                entry.target.animate([
                    { width: '0%', opacity: 0 },
                    { width: targetWidth, opacity: 1 }
                ], {
                    duration: 1500,
                    easing: 'cubic-bezier(0.16, 1, 0.3, 1)',
                    fill: 'forwards'
                });
                observer.unobserve(entry.target);
            }
        });
    }, { threshold: 0.5 });
    
    progressBars.forEach(bar => progressObserver.observe(bar));

    /* ==========================================
       FORM SUBMISSION HANLDER (MOCK)
       ========================================== */
    const contactForm = document.getElementById('contactForm');
    
    if (contactForm) {
        contactForm.addEventListener('submit', function(e) {
            e.preventDefault();
            
            const btn = contactForm.querySelector('button[type="submit"]');
            const originalText = btn.innerHTML;
            
            // Visual feedback
            btn.innerHTML = 'Sending...';
            btn.style.opacity = '0.7';
            
            // Mock API Call
            setTimeout(() => {
                btn.innerHTML = 'Message Sent ✓';
                btn.style.backgroundColor = '#10b981'; // Success green
                btn.style.color = '#fff';
                btn.style.opacity = '1';
                
                // Reset form
                contactForm.reset();
                
                // Revert button after 3 seconds
                setTimeout(() => {
                    btn.innerHTML = originalText;
                    btn.style.backgroundColor = ''; // Reverts to CSS default
                    btn.style.color = '';
                }, 3000);
            }, 1500);
        });
    }
});
