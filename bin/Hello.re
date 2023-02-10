print_endline("Running Test Program:");
let () = print_endline(Lib.Util.hello());
let () = print_endline(Int.to_string(Unix.gmtime(0.).tm_wday));
