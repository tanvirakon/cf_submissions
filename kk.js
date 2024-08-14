// const takeorder = (customer, callback) => {
//   console.log(`take order for ${customer}`);
//   callback(customer);
// };
// const processorder = (customer,callback) => {
//   console.log(`process order for ${customer}`);
//   callback(customer);
// };
// const completeorder = (customer) => {
//   console.log(`completed order for ${customer}`);
// };
// takeorder("vai", (customer) => {
//   processorder(customer, (customer) => {
//     completeorder(customer);
//   });
// });

// function akon() {
//   console.log(arguments, typeof arguments); // Logs the arguments passed to the function
// }
// akon(1, 2, 3); // Logs [1, 2, 3]

const akon = (...args) => {
  console.log(args); // Logs the arguments passed to the function
};
akon(1, 2, 3); // Logs [1, 2, 3]
