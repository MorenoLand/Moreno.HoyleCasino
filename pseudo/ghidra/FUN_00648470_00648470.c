// FUN_00648470  00648470

uint __thiscall FUN_00648470(int param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint local_c;
  
  uVar2 = FUN_00639520(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  *param_3 = 0;
  *param_4 = 0;
  local_c = 0;
  uVar3 = uVar2;
  while ((int)local_c < 0x14) {
    uVar3 = strcmp(s_SCRATCH_FACE_00763588 + local_c * 0x2c + uVar2 * 0x380,param_2);
    if (uVar3 == 0) {
      *param_3 = *(undefined4 *)(&DAT_00763580 + local_c * 0x2c + uVar2 * 0x380);
      uVar1 = *(undefined4 *)(&DAT_00763584 + local_c * 0x2c + uVar2 * 0x380);
      *param_4 = uVar1;
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
    if (*(int *)(&DAT_00763580 + local_c * 0x2c + uVar2 * 0x380) == 0) break;
    uVar3 = local_c + 1;
    local_c = uVar3;
  }
  return uVar3 & 0xffffff00;
}

