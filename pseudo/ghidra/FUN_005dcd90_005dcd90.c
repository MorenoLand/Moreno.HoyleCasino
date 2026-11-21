// FUN_005dcd90  005dcd90

void __fastcall FUN_005dcd90(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_c;
  
  local_c = 0;
  do {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar1 <= local_c) {
      FUN_00631960();
      return;
    }
    iVar1 = FUN_005dcb00(local_c);
    if (iVar1 != 0) {
      uVar2 = FUN_005dcb00(local_c);
      piVar3 = (int *)FUN_0063aac0();
      if (*piVar3 == 2) {
LAB_005dce24:
        uVar4 = 1;
      }
      else {
        piVar3 = (int *)FUN_0063aac0();
        if (*piVar3 == 3) goto LAB_005dce24;
        uVar4 = 0;
      }
      if ((char)uVar4 != '\0') {
        iVar1 = FUN_005dcb00(local_c,uVar4,param_1,uVar2);
        if (*(int *)(iVar1 + 0x4b4) != 0) {
          FUN_005dcb00(local_c,uVar4,param_1,uVar2);
          FUN_005d74b0();
        }
      }
    }
    local_c = local_c + 1;
  } while( true );
}

