// FUN_00636d40  00636d40

undefined4 __thiscall FUN_00636d40(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_8;
  
  local_8 = 0;
  do {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar2 <= local_8) {
      return 0;
    }
    if ((local_8 != param_2) &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x58) + local_8 * 4) + 0x20) != 0)) {
      cVar1 = FUN_006480d0();
      if ((cVar1 != '\0') && (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 1)) {
        return 1;
      }
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x58) + local_8 * 4);
      piVar3 = (int *)FUN_0063aac0();
      if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
        cVar1 = '\x01';
      }
      else {
        cVar1 = '\0';
      }
      if ((cVar1 != '\0') &&
         (cVar1 = FUN_00648140(cVar1,param_1,
                               *(undefined4 *)
                                (*(int *)(*(int *)(param_1 + 0x58) + local_8 * 4) + 0x20),uVar4),
         cVar1 != '\0')) {
        return 1;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

