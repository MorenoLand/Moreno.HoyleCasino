// FUN_00409760  00409760

undefined4 __fastcall FUN_00409760(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_20 [5];
  int local_c;
  int local_8;
  
  iVar2 = FUN_00409520(param_1);
  local_8 = *(int *)(iVar2 + 8) + -1;
  if (local_8 < 4) {
    uVar3 = 0;
  }
  else {
    cVar1 = FUN_004096c0();
    if (cVar1 == '\0') {
      for (local_c = 0; local_c < 5; local_c = local_c + 1) {
        local_20[local_c] = 0;
      }
      local_20[0] = FUN_004095c0(local_8 + -4);
      local_20[1] = FUN_004095c0(local_8 + -3);
      local_20[2] = FUN_004095c0(local_8 + -2);
      local_20[3] = FUN_004095c0(local_8 + -1);
      iVar2 = FUN_004095c0(local_8);
      if (local_20[2] == iVar2) {
        if (local_20[0] == iVar2) {
          if (local_20[3] == local_20[1]) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

