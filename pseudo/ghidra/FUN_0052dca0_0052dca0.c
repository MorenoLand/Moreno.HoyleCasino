// FUN_0052dca0  0052dca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0052dca0(int param_1)

{
  undefined4 local_8;
  
  if ((*(char *)(DAT_0079338c + 0x7c) == '\0') || (*(int *)(DAT_0079338c + 0x78) < 100)) {
    if (*(char *)(DAT_0079338c + 0x7e) != '\0') {
      (**(code **)(*DAT_0162ee84 + 0x80))(0x30f0ca,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
    local_8 = FUN_00535e70();
    if (local_8 != -1) {
      if (local_8 < 1) {
        local_8 = 1;
      }
      (**(code **)(*DAT_0162ee84 + 0x80))
                (0x18a94,0,0,10,local_8,0x3f800000,_DAT_006b3654,param_1 + 100);
    }
  }
  else {
    (**(code **)(*DAT_0162ee84 + 0x80))(0x18a95,0,0,10,4,0x3f800000,_DAT_006b3654,param_1 + 0x60);
    (**(code **)(*DAT_0162ee84 + 0x80))(0x18a94,0,0,10,0x16,0x3f800000,_DAT_006b3654,param_1 + 100);
  }
  return;
}

