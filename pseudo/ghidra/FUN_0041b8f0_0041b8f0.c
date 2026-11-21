// FUN_0041b8f0  0041b8f0

int __fastcall FUN_0041b8f0(int param_1)

{
  int iVar1;
  int local_1c;
  int local_18 [5];
  
  local_18[0] = 2;
  local_18[1] = 0;
  local_18[2] = 1;
  local_18[3] = 3;
  local_18[4] = 0;
  do {
    if (3 < local_18[4]) {
      return -1;
    }
    for (local_1c = 0; iVar1 = FUN_004194c0(local_18[local_18[4]]), local_1c < iVar1;
        local_1c = local_1c + 1) {
      if (*(char *)(param_1 + 0x110 + local_18[local_18[4]] * 0x118 + local_1c) == -1) {
        return local_18[local_18[4]];
      }
    }
    local_18[4] = local_18[4] + 1;
  } while( true );
}

