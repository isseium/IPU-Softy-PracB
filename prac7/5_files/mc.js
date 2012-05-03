var ap = window.navigator.appVersion.toLowerCase();
var i = ap.indexOf("msie");
var p = location.href.substr(0,location.href.indexOf(":",0));
if (ap.indexOf("windows") >= 0 && i >= 0 && ((i + 5) < ap.length)) {
  var v = ap.charAt(i + 5);
  if (v >= 5 ) {
    document.write('<scr' + 'ipt src="' + p + '://login.yahoo.co.jp/i/mc/mc1.js"></scr' + 'ipt>');
    document.write('<scr' + 'ipt src="' + p + '://login.yahoo.co.jp/i/mc/mc2.js"></scr' + 'ipt>');
  }
}