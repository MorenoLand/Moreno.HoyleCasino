// FUN_0065ee20  0065ee20

undefined4 __thiscall FUN_0065ee20(undefined4 param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  do {
    piVar1 = (int *)FUN_005fb720(0);
    iVar2 = (**(code **)(*piVar1 + 0xb8))(piVar1,param_1);
    if (iVar2 <= local_8) {
      return 0;
    }
    FUN_005fb720(0);
    iVar2 = FUN_00615260();
    if (local_8 != iVar2) {
      FUN_005fb720(0);
      iVar2 = FUN_0060ca40(local_8);
      if ((*(char *)(iVar2 + 0x3a) == '\x03') &&
         (iVar2 = strcmp((char *)(iVar2 + 0x21),param_2), iVar2 == 0)) {
        return 1;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

