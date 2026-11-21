// FUN_00668e10  00668e10

void FUN_00668e10(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *_Source;
  undefined1 local_18;
  int local_8;
  
  local_8 = 0;
  do {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar2 <= local_8) {
      return;
    }
    piVar3 = (int *)FUN_0063aac0();
    if (*piVar3 == 0) {
      *(undefined1 *)(param_1 + local_8 * 0x4c) = 0;
    }
    else {
      puVar4 = (undefined4 *)FUN_0063aac0();
      local_18 = (undefined1)*puVar4;
      *(undefined1 *)(param_1 + local_8 * 0x4c) = local_18;
      *(undefined4 *)(param_1 + 4 + local_8 * 0x4c) =
           *(undefined4 *)(*(int *)(DAT_0162ee84[0x16] + local_8 * 4) + 8);
      iVar2 = FUN_0063aac0();
      strcpy((char *)(param_1 + 8 + local_8 * 0x4c),(char *)(iVar2 + 4));
      piVar3 = (int *)FUN_0063aac0();
      if (*piVar3 == 2) {
LAB_00668f51:
        bVar1 = true;
      }
      else {
        piVar3 = (int *)FUN_0063aac0();
        if (*piVar3 == 3) goto LAB_00668f51;
        bVar1 = false;
      }
      if (bVar1) {
        _Source = (char *)FUN_00520e60();
        strcpy((char *)(param_1 + 0x3c + local_8 * 0x4c),_Source);
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

