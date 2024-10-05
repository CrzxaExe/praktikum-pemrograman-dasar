(() => {
  let size = Number(prompt("input : ")),
    total = 0;

  for (let i = 0; i <= size; i++) {
    total += i;
  }

  console.log(`total : ${total}`);
})();
