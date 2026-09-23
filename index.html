<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1, viewport-fit=cover">
<title>Heft — A Virtual Mass Perception Task</title>
<link rel="icon" href="data:image/svg+xml,<svg xmlns=%22http://www.w3.org/2000/svg%22 viewBox=%220 0 100 100%22><text y=%22.9em%22 font-size=%2290%22>⚖️</text></svg>">
<link rel="preconnect" href="https://fonts.googleapis.com">
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link href="https://fonts.googleapis.com/css2?family=Space+Grotesk:wght@400;500;700&family=JetBrains+Mono:wght@400;600&display=swap" rel="stylesheet">
<style>
  :root{
    --bg:#211E1A; --panel:#2A2620; --panel-2:#332E26; --line:#443E33;
    --ink:#EDE7DD; --ink-muted:#A79C8B;
    --brass:#C79A56; --brass-dim:#8A6D3E;
    --verdigris:#7FA37A; --clay:#C1573E;
    --radius:14px;
    padding-top:env(safe-area-inset-top,0px);
    padding-bottom:env(safe-area-inset-bottom,0px);
    box-sizing:border-box;
  }
  :root:not([data-theme="light"]){ }
  @media (prefers-color-scheme: light){
    :root:not([data-theme="dark"]){
      --bg:#EDE7DD; --panel:#F7F3EA; --panel-2:#EFE8DB; --line:#D9CFBC;
      --ink:#211E1A; --ink-muted:#6B6153;
      --brass:#8A6D3E; --brass-dim:#C79A56;
    }
  }
  *{box-sizing:border-box;}
  html{scroll-padding-top:env(safe-area-inset-top,0px);}
  html,body{height:100%;}
  body{
    margin:0; background:var(--bg); color:var(--ink);
    font-family:"Space Grotesk", system-ui, -apple-system, sans-serif;
    display:flex; align-items:flex-start; justify-content:center;
    min-height:100%; padding:36px 16px 56px;
  }
  .mono{ font-family:"JetBrains Mono", ui-monospace, monospace; }

  .rig{
    width:100%; max-width:460px; background:var(--panel);
    border:1px solid var(--line); border-radius:var(--radius);
    overflow:hidden;
  }
  header{
    padding:22px 24px 16px; border-bottom:1px solid var(--line);
  }
  header h1{
    margin:0 0 4px; font-size:1.5rem; font-weight:700; letter-spacing:-0.01em;
  }
  header p{ margin:0; color:var(--ink-muted); font-size:0.92rem; line-height:1.5; max-width:60ch; }

  .meta-row{
    display:flex; justify-content:space-between; align-items:center;
    padding:12px 24px; background:var(--panel-2); border-bottom:1px solid var(--line);
    font-size:0.85rem; color:var(--ink-muted);
  }
  .meta-row .count{ color:var(--ink); font-weight:600; }

  .stage{
    padding:28px 24px 8px; display:flex; flex-direction:column; align-items:center; gap:14px;
  }

  .platform-wrap{
    width:100%; max-width:280px; height:200px; position:relative;
    display:flex; align-items:flex-end; justify-content:center;
  }
  .platform-base{
    position:absolute; bottom:0; width:220px; height:14px;
    background:linear-gradient(var(--line), var(--panel-2));
    border-radius:4px; border:1px solid var(--line);
  }
  .platform-base::before{
    content:""; position:absolute; left:50%; top:100%; transform:translateX(-50%);
    width:6px; height:60px; background:var(--line);
  }
  .crate{
    position:absolute; bottom:14px; width:96px; height:96px;
    border-radius:8px;
    background:linear-gradient(145deg, var(--brass-dim), var(--brass));
    border:1px solid var(--line);
    display:flex; align-items:center; justify-content:center;
    box-shadow:0 6px 18px rgba(0,0,0,0.35);
    will-change:transform;
  }
  .crate span{ font-size:0.7rem; color:#1a1610; font-weight:700; letter-spacing:0.02em; opacity:0.75;}

  .lift-btn{
    -webkit-user-select:none; user-select:none; touch-action:none;
    width:100%; max-width:280px; padding:16px; border-radius:10px;
    border:1px solid var(--brass); background:transparent; color:var(--brass);
    font-family:inherit; font-size:1rem; font-weight:600; cursor:pointer;
    transition:background 0.15s, color 0.15s;
  }
  .lift-btn:active, .lift-btn.holding{ background:var(--brass); color:#1a1610; }
  .lift-btn:focus-visible{ outline:2px solid var(--brass); outline-offset:2px; }
  .lift-btn:disabled{ opacity:0.35; cursor:default; }

  .strain-track{
    width:100%; max-width:280px; height:8px; border-radius:4px;
    background:var(--panel-2); border:1px solid var(--line); overflow:hidden;
  }
  .strain-fill{
    height:100%; width:0%; background:var(--clay); transition:width 0.05s linear;
  }
  .hint{ font-size:0.78rem; color:var(--ink-muted); min-height:1.2em; text-align:center; }

  .guess-zone{
    padding:18px 24px 24px; border-top:1px solid var(--line);
    display:flex; flex-direction:column; gap:12px;
  }
  .guess-zone.disabled{ opacity:0.35; pointer-events:none; }
  .guess-row{ display:flex; align-items:center; gap:14px; }
  .guess-readout{
    font-size:1.6rem; min-width:96px; text-align:right;
    color:var(--brass); font-weight:600;
  }
  input[type="range"]{
    flex:1; accent-color:var(--brass); height:4px;
  }
  .submit-btn{
    width:100%; padding:14px; border-radius:10px; border:none;
    background:var(--brass); color:#1a1610; font-family:inherit;
    font-size:1rem; font-weight:700; cursor:pointer;
  }
  .submit-btn:disabled{ opacity:0.35; cursor:default; }
  .submit-btn:focus-visible{ outline:2px solid var(--ink); outline-offset:2px; }

  .feedback{
    padding:16px 24px; border-top:1px solid var(--line);
    font-size:0.9rem; line-height:1.6; display:none;
  }
  .feedback.show{ display:block; }
  .feedback .num{ font-weight:700; color:var(--ink); }
  .feedback.good .num.err{ color:var(--verdigris); }
  .feedback.bad .num.err{ color:var(--clay); }

  .setup{ padding:20px 24px; display:flex; flex-direction:column; gap:12px; }
  .setup label{ font-size:0.85rem; color:var(--ink-muted); }
  .setup input[type="text"]{
    width:100%; padding:10px 12px; border-radius:8px; border:1px solid var(--line);
    background:var(--panel-2); color:var(--ink); font-family:inherit; font-size:0.95rem;
  }
  .setup .start-btn{
    padding:14px; border-radius:10px; border:none; background:var(--brass);
    color:#1a1610; font-family:inherit; font-weight:700; font-size:1rem; cursor:pointer;
  }

  .results{ padding:22px 24px 26px; display:none; }
  .results.show{ display:block; }
  .results h2{ margin:0 0 6px; font-size:1.2rem; }
  .results .summary{ color:var(--ink-muted); font-size:0.9rem; margin-bottom:14px; }
  table{ width:100%; border-collapse:collapse; font-size:0.85rem; margin-bottom:16px; }
  th,td{ text-align:right; padding:6px 4px; border-bottom:1px solid var(--line); }
  th:first-child, td:first-child{ text-align:left; }
  .export-btn, .restart-btn{
    width:100%; padding:12px; border-radius:10px; font-family:inherit;
    font-weight:600; font-size:0.92rem; cursor:pointer; margin-top:8px;
  }
  .export-btn{ border:1px solid var(--brass); background:transparent; color:var(--brass); }
  .restart-btn{ border:1px solid var(--line); background:transparent; color:var(--ink-muted); }

  footer{
    max-width:460px; width:100%; text-align:center; color:var(--ink-muted);
    font-size:0.78rem; margin-top:16px; line-height:1.6;
  }

  @media (prefers-reduced-motion: reduce){
    .crate{ transition:none !important; }
  }
</style>
</head>
<body>

<div style="display:flex; flex-direction:column; align-items:center; width:100%;">
<div class="rig" id="rig">

  <header>
    <h1>Heft</h1>
    <p>A virtual mass perception task. Hold the lift control to feel a sample's weight through motion, sound and (on supported phones) vibration — then estimate its mass in grams.</p>
  </header>

  <div class="setup" id="setup">
    <label for="pid">Participant / session ID (optional, for exported data)</label>
    <input type="text" id="pid" placeholder="e.g. P07 or leave blank">
    <label for="trialCount">Number of trials</label>
    <input type="range" id="trialCount" min="4" max="16" value="8" step="1">
    <div class="hint" id="trialCountLabel">8 trials</div>
    <button class="start-btn" id="startBtn">Begin session</button>
  </div>

  <div id="taskArea" style="display:none;">
    <div class="meta-row">
      <span>Trial <span class="count mono" id="trialNum">1</span> / <span class="mono" id="trialTotal">8</span></span>
      <span class="mono" id="runningScore">avg error —</span>
    </div>

    <div class="stage">
      <div class="platform-wrap">
        <div class="platform-base"></div>
        <div class="crate" id="crate"><span>SAMPLE</span></div>
      </div>
      <button class="lift-btn" id="liftBtn">Press and hold to lift</button>
      <div class="strain-track"><div class="strain-fill" id="strainFill"></div></div>
      <div class="hint" id="stageHint">Hold the button for about a second to get a feel for it, then release.</div>
    </div>

    <div class="guess-zone disabled" id="guessZone">
      <div class="guess-row">
        <input type="range" id="guessSlider" min="0" max="1000" value="500" step="5">
        <div class="guess-readout mono" id="guessReadout">500 g</div>
      </div>
      <button class="submit-btn" id="submitBtn" disabled>Lock in estimate</button>
    </div>

    <div class="feedback" id="feedback"></div>
  </div>

  <div class="results" id="results">
    <h2>Session complete</h2>
    <div class="summary" id="summary"></div>
    <table id="resultsTable">
      <thead><tr><th>Trial</th><th>Actual (g)</th><th>Guess (g)</th><th>Error (g)</th></tr></thead>
      <tbody id="resultsBody"></tbody>
    </table>
    <button class="export-btn" id="exportBtn">Export CSV</button>
    <button class="restart-btn" id="restartBtn">Run another session</button>
  </div>

</div>
<footer>
  Weight is simulated through lift speed, oscillation, an auditory thud and (where supported) the device's vibration motor — no physical mass is involved. Built as an open research probe into cross-modal weight perception; fork it, swap the cue model, or hook the export into your own study pipeline.
</footer>
</div>

<script>
(function(){
  "use strict";

  const setupEl = document.getElementById('setup');
  const taskArea = document.getElementById('taskArea');
  const resultsEl = document.getElementById('results');
  const startBtn = document.getElementById('startBtn');
  const trialCountInput = document.getElementById('trialCount');
  const trialCountLabel = document.getElementById('trialCountLabel');
  const pidInput = document.getElementById('pid');

  const trialNumEl = document.getElementById('trialNum');
  const trialTotalEl = document.getElementById('trialTotal');
  const runningScoreEl = document.getElementById('runningScore');
  const crate = document.getElementById('crate');
  const liftBtn = document.getElementById('liftBtn');
  const strainFill = document.getElementById('strainFill');
  const stageHint = document.getElementById('stageHint');
  const guessZone = document.getElementById('guessZone');
  const guessSlider = document.getElementById('guessSlider');
  const guessReadout = document.getElementById('guessReadout');
  const submitBtn = document.getElementById('submitBtn');
  const feedback = document.getElementById('feedback');

  const summaryEl = document.getElementById('summary');
  const resultsBody = document.getElementById('resultsBody');
  const exportBtn = document.getElementById('exportBtn');
  const restartBtn = document.getElementById('restartBtn');

  let audioCtx = null;
  function ensureAudio(){
    if(!audioCtx){
      const AC = window.AudioContext || window.webkitAudioContext;
      if(AC) audioCtx = new AC();
    }
    if(audioCtx && audioCtx.state === 'suspended') audioCtx.resume();
  }

  function playThud(weight){
    if(!audioCtx) return;
    const t0 = audioCtx.currentTime;
    const osc = audioCtx.createOscillator();
    const gain = audioCtx.createGain();
    const freq = 180 - (weight/1000)*110; // heavier = lower thud
    osc.type = 'sine';
    osc.frequency.setValueAtTime(freq*1.6, t0);
    osc.frequency.exponentialRampToValueAtTime(freq, t0+0.08);
    gain.gain.setValueAtTime(0.0001, t0);
    gain.gain.exponentialRampToValueAtTime(0.5, t0+0.02);
    const decay = 0.25 + (weight/1000)*0.35;
    gain.gain.exponentialRampToValueAtTime(0.0001, t0+decay);
    osc.connect(gain).connect(audioCtx.destination);
    osc.start(t0);
    osc.stop(t0+decay+0.05);
  }

  function vibrateForWeight(weight){
    if(!navigator.vibrate) return;
    // Heavier samples get longer, more sustained pulses; lighter ones a quick tap.
    const unit = Math.round(30 + (weight/1000)*90);
    navigator.vibrate([unit, 40, unit, 40, unit]);
  }

  let session = { pid:'', total:8, current:0, weights:[], results:[] };
  let holding = false;
  let holdStart = 0;
  let liftRAF = null;
  let strainRAF = null;
  let currentWeight = 0;
  let liftHandled = false;

  trialCountInput.addEventListener('input', ()=>{
    trialCountLabel.textContent = trialCountInput.value + ' trials';
  });

  function randomWeight(){
    // 80 - 950 g in steps of 10, avoiding a perfectly even spread each run
    return Math.round((80 + Math.random()*870)/10)*10;
  }

  function startSession(){
    session.pid = pidInput.value.trim();
    session.total = parseInt(trialCountInput.value,10);
    session.current = 0;
    session.results = [];
    session.weights = [];
    for(let i=0;i<session.total;i++) session.weights.push(randomWeight());

    trialTotalEl.textContent = session.total;
    setupEl.style.display = 'none';
    taskArea.style.display = 'block';
    resultsEl.classList.remove('show');
    nextTrial();
  }

  function nextTrial(){
    feedback.classList.remove('show','good','bad');
    guessZone.classList.add('disabled');
    submitBtn.disabled = true;
    liftBtn.disabled = false;
    liftHandled = false;
    strainFill.style.width = '0%';
    crate.style.transform = 'translateY(0px) rotate(0deg)';
    stageHint.textContent = 'Hold the button to feel this sample, then release.';
    trialNumEl.textContent = session.current + 1;
    currentWeight = session.weights[session.current];
    guessSlider.value = 500;
    guessReadout.textContent = '500 g';
  }

  function updateRunningScore(){
    if(session.results.length === 0){ runningScoreEl.textContent = 'avg error —'; return; }
    const avg = session.results.reduce((s,r)=>s+r.error,0) / session.results.length;
    runningScoreEl.textContent = 'avg error ' + avg.toFixed(0) + ' g';
  }

  // --- Lift interaction ---
  function beginLift(){
    if(liftHandled || liftBtn.disabled) return;
    ensureAudio();
    holding = true;
    holdStart = performance.now();
    liftBtn.classList.add('holding');
    playThud(currentWeight);
    vibrateForWeight(currentWeight);

    const riseTimeMs = 300 + (currentWeight/1000)*1400; // heavier -> slower to rise
    const maxRise = 46;
    const wobbleAmp = 2 + (currentWeight/1000)*10;

    function animate(now){
      if(!holding) return;
      const elapsed = now - holdStart;
      const riseFrac = Math.min(1, elapsed / riseTimeMs);
      const eased = 1 - Math.pow(1-riseFrac, 2);
      const y = -eased * maxRise;
      const wobble = riseFrac >= 1 ? Math.sin(elapsed/140) * wobbleAmp * 0.5 : 0;
      crate.style.transform = 'translateY(' + (y+wobble) + 'px) rotate(' + (wobble*0.15) + 'deg)';
      liftRAF = requestAnimationFrame(animate);
    }
    liftRAF = requestAnimationFrame(animate);

    const strainRate = 0.012 + (currentWeight/1000)*0.05; // % per ms
    let strainPct = 0;
    let last = performance.now();
    function strain(now){
      if(!holding) return;
      const dt = now - last; last = now;
      strainPct = Math.min(100, strainPct + strainRate*dt);
      strainFill.style.width = strainPct + '%';
      if(strainPct >= 100){
        stageHint.textContent = 'This one is straining your grip — you can release any time.';
      }
      strainRAF = requestAnimationFrame(strain);
    }
    strainRAF = requestAnimationFrame(strain);
  }

  function endLift(){
    if(!holding) return;
    holding = false;
    liftBtn.classList.remove('holding');
    cancelAnimationFrame(liftRAF);
    cancelAnimationFrame(strainRAF);

    // settle animation: drop back with a small damped bounce
    const startTransform = crate.style.transform;
    crate.style.transition = 'transform 0.45s cubic-bezier(.36,1.4,.4,1)';
    crate.style.transform = 'translateY(0px) rotate(0deg)';
    setTimeout(()=>{ crate.style.transition = ''; }, 480);

    liftHandled = true;
    liftBtn.disabled = true;
    guessZone.classList.remove('disabled');
    submitBtn.disabled = false;
    stageHint.textContent = 'Now estimate its mass below.';
  }

  liftBtn.addEventListener('pointerdown', (e)=>{ e.preventDefault(); beginLift(); });
  window.addEventListener('pointerup', endLift);
  window.addEventListener('pointercancel', endLift);
  liftBtn.addEventListener('keydown', (e)=>{
    if((e.key === ' ' || e.key === 'Enter') && !holding) beginLift();
  });
  liftBtn.addEventListener('keyup', (e)=>{
    if(e.key === ' ' || e.key === 'Enter') endLift();
  });

  guessSlider.addEventListener('input', ()=>{
    guessReadout.textContent = guessSlider.value + ' g';
  });

  submitBtn.addEventListener('click', ()=>{
    const guess = parseInt(guessSlider.value,10);
    const error = Math.abs(guess - currentWeight);
    session.results.push({ trial: session.current+1, actual: currentWeight, guess, error });

    const pct = Math.round((error/currentWeight)*100);
    feedback.classList.add('show', error <= currentWeight*0.15 ? 'good' : 'bad');
    feedback.innerHTML = 'Actual mass: <span class="num mono">' + currentWeight + ' g</span>' +
      ' &nbsp;·&nbsp; Your estimate: <span class="num mono">' + guess + ' g</span>' +
      ' &nbsp;·&nbsp; Off by <span class="num err mono">' + error + ' g (' + pct + '%)</span>';

    updateRunningScore();
    guessZone.classList.add('disabled');
    submitBtn.disabled = true;

    session.current++;
    setTimeout(()=>{
      if(session.current < session.total){
        nextTrial();
      } else {
        showResults();
      }
    }, 1400);
  });

  function showResults(){
    taskArea.style.display = 'none';
    resultsEl.classList.add('show');
    const avg = session.results.reduce((s,r)=>s+r.error,0) / session.results.length;
    const avgPct = session.results.reduce((s,r)=>s+(r.error/r.actual*100),0) / session.results.length;
    summaryEl.textContent = 'Mean absolute error ' + avg.toFixed(1) + ' g across ' + session.results.length +
      ' trials (' + avgPct.toFixed(1) + '% average relative error).';
    resultsBody.innerHTML = session.results.map(r =>
      '<tr><td>'+r.trial+'</td><td class="mono">'+r.actual+'</td><td class="mono">'+r.guess+'</td><td class="mono">'+r.error+'</td></tr>'
    ).join('');
  }

  exportBtn.addEventListener('click', ()=>{
    const rows = [['participant','trial','actual_g','guess_g','error_g','timestamp']];
    const ts = new Date().toISOString();
    session.results.forEach(r=>{
      rows.push([session.pid || 'anonymous', r.trial, r.actual, r.guess, r.error, ts]);
    });
    const csv = rows.map(r=>r.join(',')).join('\n');
    const blob = new Blob([csv], {type:'text/csv'});
    const url = URL.createObjectURL(blob);
    const a = document.createElement('a');
    a.href = url;
    a.download = 'heft-session-' + (session.pid || 'anon') + '-' + Date.now() + '.csv';
    document.body.appendChild(a);
    a.click();
    a.remove();
    URL.revokeObjectURL(url);
  });

  restartBtn.addEventListener('click', ()=>{
    resultsEl.classList.remove('show');
    setupEl.style.display = 'flex';
  });

  startBtn.addEventListener('click', startSession);
})();
</script>
</body>
</html>
