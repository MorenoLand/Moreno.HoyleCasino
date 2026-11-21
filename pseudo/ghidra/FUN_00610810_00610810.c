// FUN_00610810  00610810

uint __thiscall FUN_00610810(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  uint local_20;
  uint local_1c;
  uint local_c;
  uint local_8;
  
  piVar3 = param_1;
  if ((((*param_1 == *param_2) && (param_1[2] == param_2[2])) &&
      (piVar3 = (int *)(uint)*(byte *)(param_2 + 3), (int *)(uint)*(byte *)(param_1 + 3) == piVar3))
     && ((piVar3 = (int *)param_1[4], piVar3 == (int *)param_2[4] &&
         (piVar3 = (int *)param_1[5], piVar3 == (int *)param_2[5])))) {
    fVar1 = (float)param_1[6];
    fVar2 = (float)param_2[6];
    piVar3 = (int *)CONCAT22((short)((uint)piVar3 >> 0x10),
                             (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                             | (ushort)(fVar2 == fVar1) << 0xe);
    if (fVar2 == fVar1) {
      fVar1 = (float)param_1[7];
      fVar2 = (float)param_2[7];
      piVar3 = (int *)CONCAT22((short)((uint)param_1 >> 0x10),
                               (ushort)(fVar2 < fVar1) << 8 |
                               (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                               (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 == fVar1) {
        for (local_8 = 0; (param_2[1] != 0 && (*(int *)(param_2[1] + local_8 * 4) != 0));
            local_8 = local_8 + 1) {
        }
        if (param_1[9] == 0) {
          local_1c = 0;
        }
        else {
          local_1c = param_1[10] - param_1[9] >> 2;
        }
        if (local_8 != local_1c) {
          return local_8 & 0xffffff00;
        }
        local_c = 0;
        uVar4 = local_8;
        while( true ) {
          if ((int)local_8 <= (int)local_c) {
            return CONCAT31((int3)(uVar4 >> 8),1);
          }
          if (param_1[9] == 0) {
            local_20 = 0;
          }
          else {
            local_20 = param_1[10] - param_1[9] >> 2;
          }
          if (local_20 <= local_c) {
            _invalid_parameter_noinfo();
          }
          uVar4 = *(uint *)(param_1[9] + local_c * 4);
          if (uVar4 != *(uint *)(param_2[1] + local_c * 4)) break;
          local_c = local_c + 1;
        }
        return uVar4 & 0xffffff00;
      }
    }
  }
  return (uint)piVar3 & 0xffffff00;
}

