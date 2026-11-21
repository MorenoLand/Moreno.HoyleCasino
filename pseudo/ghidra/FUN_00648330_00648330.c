// FUN_00648330  00648330

undefined4 __thiscall FUN_00648330(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  iVar1 = FUN_00639520(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  local_c = 0;
  while( true ) {
    if (0x13 < local_c) {
      return 0;
    }
    iVar2 = strcmp(s_SCRATCH_FACE_00763588 + local_c * 0x2c + iVar1 * 0x380,param_2);
    if (iVar2 == 0) break;
    if (*(int *)(&DAT_00763580 + local_c * 0x2c + iVar1 * 0x380) == 0) {
      return 0;
    }
    local_c = local_c + 1;
  }
  return *(undefined4 *)(&DAT_00763580 + local_c * 0x2c + iVar1 * 0x380);
}

