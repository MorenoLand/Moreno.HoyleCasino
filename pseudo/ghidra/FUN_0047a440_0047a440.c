// FUN_0047a440  0047a440

void __thiscall FUN_0047a440(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 local_8;
  
  local_8 = 0;
  do {
    iVar1 = FUN_0047f950();
    if (iVar1 <= local_8) {
      return;
    }
    uVar2 = FUN_005dcb00(local_8);
    piVar3 = (int *)FUN_0063aac0();
    if (*piVar3 == 2) {
LAB_0047a4aa:
      cVar5 = '\x01';
    }
    else {
      piVar3 = (int *)FUN_0063aac0();
      if (*piVar3 == 3) goto LAB_0047a4aa;
      cVar5 = '\0';
    }
    if (cVar5 != '\0') {
      FUN_005dcb00(local_8,cVar5,param_1,uVar2);
      puVar4 = (undefined4 *)FUN_005d52e0();
      *puVar4 = param_2;
      FUN_005dcb00(local_8);
      iVar1 = FUN_005d52e0();
      *(undefined4 *)(iVar1 + 4) = 0;
      FUN_005dcb00(local_8);
      FUN_0063b0a0();
    }
    local_8 = local_8 + 1;
  } while( true );
}

