// FUN_005cad50  005cad50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005cad50(int *param_1,int param_2)

{
  undefined8 uStack_a4;
  double local_9c [18];
  int local_8;
  
  uStack_a4._4_4_ = param_1;
  local_9c[0] = _DAT_006b3e40;
  local_9c[1] = 1.0;
  local_9c[2] = (double)_DAT_006be720;
  local_9c[3] = (double)_DAT_006be518;
  local_9c[4] = (double)_DAT_006d2430;
  local_9c[5] = (double)_DAT_006be520;
  local_9c[6] = (double)_DAT_006b4b00;
  local_9c[7] = (double)_DAT_006d2568;
  local_9c[8] = (double)_DAT_006bc208;
  local_9c[9] = (double)_DAT_006d2560;
  local_9c[10] = (double)_DAT_006d2558;
  local_9c[0xb] = (double)_DAT_006d2550;
  local_9c[0xc] = (double)_DAT_006d2548;
  local_9c[0xd] = (double)_DAT_006cae30;
  local_9c[0xe] = (double)_DAT_006d2540;
  local_9c[0xf] = (double)_DAT_006ca358;
  local_9c[0x10] = (double)_DAT_006d2538;
  local_9c[0x11] = (double)_DAT_006d2438;
  local_8 = 0;
  while( true ) {
    if (0x11 < local_8) {
      return;
    }
    if (*(double *)(param_1 + 0x78) == local_9c[local_8]) break;
    local_8 = local_8 + 1;
  }
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x78) = (&uStack_a4)[local_8];
  }
  else {
    *(double *)(param_1 + 0x78) = local_9c[local_8 + 1];
  }
  uStack_a4._0_4_ = 0x5cae7a;
  uStack_a4._0_4_ = FUN_005cab60();
  (**(code **)(*uStack_a4._4_4_ + 200))();
  return;
}

