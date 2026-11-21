// FUN_00569580  00569580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00569580(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (4 < local_8) {
      return;
    }
    iVar1 = (**(code **)(**(int **)(DAT_00793440 + 8 + local_8 * 4) + 0x4c))();
    iVar2 = FUN_00560340(param_1);
    if (iVar1 == iVar2) break;
    local_8 = local_8 + 1;
  }
  (**(code **)(*DAT_0162ee84 + 0x80))(0x31225e,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  FUN_005694f0(CONCAT22((short)((uint)local_8 >> 0x10),
                        *(undefined2 *)(*(int *)(DAT_00793440 + 8 + local_8 * 4) + 400)));
  return;
}

