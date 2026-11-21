// FUN_00613e70  00613e70

void __fastcall FUN_00613e70(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  byte local_5;
  
  local_5 = 0;
  while (iVar2 = FUN_0062ae50(), iVar2 != 0) {
    local_c = (undefined4 *)FUN_0062ade0(0);
    local_1c = local_c[2];
    local_18 = local_c[3];
    local_14 = local_c[4];
    local_10 = local_c[5];
    FUN_0062ab60(local_c);
    if (local_c == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)*local_c)(1);
    }
    FUN_00613d10(&local_1c);
    FUN_00613b60(&local_1c);
    local_5 = local_5 | *(byte *)(param_1 + 0x22);
    if ((char)param_1[0x22] != '\0') {
      (**(code **)(*param_1 + 0x18))(&local_1c,uVar3);
    }
    if (DAT_00795fa3 != '\0') {
      do {
        cVar1 = FUN_005e9e60();
      } while (cVar1 == '\0');
      do {
        cVar1 = FUN_005e9e60();
      } while (cVar1 != '\0');
    }
  }
  return;
}

