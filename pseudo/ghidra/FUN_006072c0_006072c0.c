// FUN_006072c0  006072c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006072c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((char)param_1[3] != '\0') {
    iVar1 = FUN_005f3e50();
    iVar1 = abs(iVar1 - param_1[10]);
    if (*(int *)(param_1[1] + 0x184) <= iVar1) {
      iVar1 = FUN_005f3e50();
      param_1[10] = iVar1;
      if (*(int *)(param_1[1] + 0x184) == 0) {
        param_1[0xd] = param_1[0xc] * 4 + -4;
        param_1[0xe] = (int)(1.0 - (float)param_1[0x11]);
      }
      param_1[0xe] = (int)((float)param_1[0xe] + (float)param_1[0x11]);
      if ((float)_DAT_006b2c48 <= (float)param_1[0xe]) {
        if (param_1[0xc] * 4 <= param_1[0xd] + 4) {
          (**(code **)(*param_1 + 0x10))();
          return;
        }
        param_1[0xd] = param_1[0xd] + 4;
        param_1[0xe] = (int)((float)param_1[0xe] - (float)_DAT_006b2c48);
      }
      param_1[0xf] = (int)((float)param_1[0xe] * (float)param_1[0xe]);
      param_1[0x10] = (int)((float)param_1[0xf] * (float)param_1[0xe]);
      param_1[6] = (int)(((float)param_1[0x10] - (float)param_1[0xf]) *
                         (float)*(int *)(param_1[0xb] + 0x18 + param_1[0xd] * 8) +
                        (((float)param_1[0x10] - (float)param_1[0xf] * (float)_PTR_006b3740) +
                        (float)param_1[0xe]) *
                        (float)*(int *)(param_1[0xb] + 0x10 + param_1[0xd] * 8) +
                        ((float)param_1[0xf] * (float)_DAT_006b9490 +
                        (float)param_1[0x10] * (float)_DAT_006d7e38) *
                        (float)*(int *)(param_1[0xb] + 8 + param_1[0xd] * 8) +
                        (((float)param_1[0x10] * (float)_PTR_006b3740 -
                         (float)param_1[0xf] * (float)_DAT_006b9490) + (float)_DAT_006b2c48) *
                        (float)*(int *)(param_1[0xb] + param_1[0xd] * 8));
      param_1[7] = (int)(((float)param_1[0x10] - (float)param_1[0xf]) *
                         (float)*(int *)(param_1[0xb] + 0x1c + param_1[0xd] * 8) +
                        (((float)param_1[0x10] - (float)param_1[0xf] * (float)_PTR_006b3740) +
                        (float)param_1[0xe]) *
                        (float)*(int *)(param_1[0xb] + 0x14 + param_1[0xd] * 8) +
                        ((float)param_1[0xf] * (float)_DAT_006b9490 +
                        (float)param_1[0x10] * (float)_DAT_006d7e38) *
                        (float)*(int *)(param_1[0xb] + 0xc + param_1[0xd] * 8) +
                        (((float)param_1[0x10] * (float)_PTR_006b3740 -
                         (float)param_1[0xf] * (float)_DAT_006b9490) + (float)_DAT_006b2c48) *
                        (float)*(int *)(param_1[0xb] + 4 + param_1[0xd] * 8));
      uVar2 = FUN_00686cc0();
      uVar3 = FUN_00686cc0(param_1,uVar2);
      (**(code **)(*(int *)param_1[1] + 0x44))(uVar2,uVar3);
    }
  }
  return;
}

