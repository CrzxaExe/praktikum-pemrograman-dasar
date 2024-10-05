(() => {
  let arr = [];

  for (let i = 0; i < 10; i++) {
    arr[i] = Number(prompt(`Masukan angka ke-${i + 1} : `));
  }

  let min = arr.reduce((i, r) => (i = Math.min(i, r)), 0);

  console.log(`Angka terkecil adalah : ${min}`);
})();
