// FUN_00668fa0  00668fa0

void __thiscall FUN_00668fa0(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  char *_Source;
  int local_8;
  
  *(undefined4 *)(param_1 + 4) = 0;
  local_8 = 0;
  while( true ) {
    iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar3 <= local_8) break;
    FUN_0063b2d0();
    local_8 = local_8 + 1;
  }
  local_8 = 0;
  while( true ) {
    iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar3 <= local_8) break;
    if (*(char *)(param_2 + local_8 * 0x4c) == '\0') {
      FUN_0063a3e0(local_8,0);
      puVar4 = (undefined4 *)FUN_0063aac0();
      *puVar4 = 0;
    }
    else {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      if (*(char *)(param_2 + local_8 * 0x4c) == '\x01') {
        cVar2 = *(char *)(param_2 + local_8 * 0x4c);
        piVar5 = (int *)FUN_0063aac0();
        *piVar5 = (int)cVar2;
        FUN_0063b490(*(undefined4 *)(param_2 + 4 + local_8 * 0x4c));
      }
      else {
        FUN_0063ab10(param_2 + 0x3c + local_8 * 0x4c);
      }
      _Source = (char *)(param_2 + 8 + local_8 * 0x4c);
      iVar3 = FUN_0063aac0();
      strcpy((char *)(iVar3 + 4),_Source);
    }
    local_8 = local_8 + 1;
  }
  local_8 = 0;
  while( true ) {
    iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar3 <= local_8) break;
    if ((*(char *)(param_2 + local_8 * 0x4c) != '\0') &&
       (*(char *)(param_2 + local_8 * 0x4c) != '\x01')) {
      cVar2 = FUN_00669450(local_8 * 0x4c + param_2);
      if (cVar2 != '\0') {
        puVar4 = (undefined4 *)FUN_0063aac0();
        *puVar4 = 1;
        uVar6 = (**(code **)(*DAT_0162ee84 + 0x370))(1);
        FUN_0063b490(uVar6);
      }
    }
    local_8 = local_8 + 1;
  }
  local_8 = 0;
  do {
    iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar3 <= local_8) {
      return;
    }
    piVar5 = (int *)FUN_0063aac0();
    if (*piVar5 == 2) {
LAB_00669272:
      bVar1 = true;
    }
    else {
      piVar5 = (int *)FUN_0063aac0();
      if (*piVar5 == 3) goto LAB_00669272;
      bVar1 = false;
    }
    if (bVar1) {
      FUN_0063a8d0(0xffffffff,0,1,1,1);
    }
    piVar5 = (int *)FUN_0063aac0();
    if (*piVar5 == 1) {
      FUN_0063a8d0(*(undefined4 *)(*(int *)(DAT_0162ee84[0x16] + local_8 * 4) + 8),0,1,1,1);
    }
    local_8 = local_8 + 1;
  } while( true );
}

