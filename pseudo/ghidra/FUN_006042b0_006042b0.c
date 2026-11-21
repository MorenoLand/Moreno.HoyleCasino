// FUN_006042b0  006042b0

void FUN_006042b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)FUN_0062ac30();
  while ((param_1 < DAT_007950a8 && (local_8 != (undefined4 *)0x0))) {
    if (local_8[3] == 0) {
      if (param_1 != 0) {
        FUN_0062fde0("Purging a resource.\n");
      }
      FUN_0062ab60(local_8);
      if ((undefined4 *)local_8[2] == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (*(code *)**(undefined4 **)local_8[2])(1);
      }
      if (local_8 == (undefined4 *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (**(code **)*local_8)(1);
      }
      local_8 = (undefined4 *)FUN_0062ac30(uVar2,uVar1);
    }
    else {
      local_8 = (undefined4 *)FUN_0062ace0();
    }
  }
  return;
}

