// FUN_004c6550  004c6550

void __fastcall FUN_004c6550(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  local_8 = FUN_004c65d0(param_1);
  if ((local_8 < 0) && (3 < local_8)) {
    local_8 = 0;
  }
  if (local_8 == 1) {
    iVar1 = FUN_0062fbf0(1000);
    if (iVar1 < 0x23) {
      local_8 = 0;
    }
  }
  if (local_8 == 2) {
    iVar1 = FUN_0062fbf0(1000);
    if (iVar1 < 0x2d) {
      local_8 = 3;
    }
  }
  uVar2 = FUN_0062fbf0(8,local_8);
  FUN_004c66b0(uVar2,local_8);
  return;
}

