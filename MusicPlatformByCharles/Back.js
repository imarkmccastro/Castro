// Song data
const songs = [
    { title: 'SuperFar', artist: 'Lany', file: 'assets/LANY - Super Far (Official Audio).mp3', cover: 'assets/song1-cover.jpg' },

  ];
  
  const playlists = {
    favorites: [
      { title: 'Song Title 1', artist: 'Artist 1', file: '/assetsLANY - Super Far (Official Audio).mp3', cover: 'assets/song1-cover.jpg' },
      { title: 'Song Title 2', artist: 'Artist 2', file: 'assets/song2.mp3', cover: 'assets/song2-cover.jpg' }
    ],
    topHits: [
      { title: 'Song Title 3', artist: 'Artist 3', file: 'assets/song3.mp3', cover: 'assets/song3-cover.jpg' },
      { title: 'Song Title 4', artist: 'Artist 4', file: 'assets/song4.mp3', cover: 'assets/song4-cover.jpg' }
    ]
  };
  
  // Display songs dynamically
  function displaySongs(songList) {
    const songGrid = document.querySelector('.song-grid');
    songGrid.innerHTML = '';
    songList.forEach(song => {
      const songCard = document.createElement('div');
      songCard.classList.add('song-card');
      songCard.onclick = () => playSong(song.file, song);
      songCard.innerHTML = `
        <img src="${song.cover}" alt="${song.title}">
        <h3>${song.title}</h3>
        <p>${song.artist}</p>
      `;
      songGrid.appendChild(songCard);
    });
  }
  
  // Play a song
  function playSong(src, song) {
    const audioSource = document.getElementById('audioSource');
    audioSource.src = src;
    const audioElement = document.getElementById('audioElement');
    audioElement.load();
    audioElement.play();
    audioPlayer.style.display = 'flex';
  }
  
  // Close the audio player
  const closePlayer = document.getElementById('closePlayer');
  closePlayer.addEventListener('click', () => {
    audioPlayer.style.display = 'none';
    const audioElement = document.getElementById('audioElement');
    audioElement.pause();
    audioElement.src = '';
  });
  
  // Search functionality
  function searchSongs() {
    const query = document.getElementById('searchInput').value.toLowerCase();
    const filteredSongs = songs.filter(song => 
      song.title.toLowerCase().includes(query) || song.artist.toLowerCase().includes(query)
    );
    displaySongs(filteredSongs);
  }
  
  // Toggle dark mode
  const darkModeToggle = document.getElementById('darkModeToggle');
  darkModeToggle.addEventListener('click', () => {
    document.body.classList.toggle('dark-mode');
  });
  
  // Initial display of all songs
  displaySongs(songs);
  