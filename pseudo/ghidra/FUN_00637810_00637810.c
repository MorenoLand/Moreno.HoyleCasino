// FUN_00637810  00637810

uint FUN_00637810(int param_1)

{
  int iVar1;
  undefined4 local_1c;
  
  FUN_006375b0();
  iVar1 = FUN_0063aac0();
  local_1c = (uint)*(char *)(iVar1 + 0x5b);
  if (param_1 == 1) {
    local_1c = (uint)(4 < (int)local_1c);
  }
  else if (param_1 == 2) {
    local_1c = local_1c * 10;
  }
  else if (param_1 == 3) {
    if ((int)(local_1c * 0xf) < 0x2d) {
      local_1c = 0x2d;
    }
    else {
      local_1c = local_1c * 0xf;
    }
  }
  return local_1c;
}

