// FUN_00634420  00634420

int FUN_00634420(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_1 / 100;
  if (local_8 < 1) {
    local_c = 0;
    local_10 = 1000;
  }
  else {
    local_c = 1000;
    for (; 0 < local_8; local_8 = local_8 + -1) {
      local_c = local_c << 1;
    }
    local_10 = local_c << 1;
  }
  local_14 = local_c;
  if (param_1 % 100 != 0) {
    local_14 = ((local_10 - local_c) * (param_1 % 100)) / 100 + local_c;
  }
  return local_14 / 100;
}

