// scripts.js
document.addEventListener('DOMContentLoaded', function() {
    // Load Summary.md content
    fetch('Summary.md')
        .then(response => response.text())
        .then(data => {
            document.getElementById('summary-content').innerHTML = marked(data);
        });

    // Add event listeners to dropdown links
    document.querySelectorAll('.dropdown-content a').forEach(link => {
        link.addEventListener('click', function(event) {
            event.preventDefault();
            const href = this.getAttribute('href').substring(1);
            fetch(`Markdown_Files/${href}.md`)
                .then(response => response.text())
                .then(data => {
                    document.getElementById('content').innerHTML = marked(data);
                });
        });
    });
});