// FUN_0061c430  0061c430

void FUN_0061c430(ushort param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte local_d;
  ushort local_c;
  
  local_c = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        local_d = *param_3;
        bVar1 = param_3[1];
        pbVar2 = param_3 + 2;
        if (local_d == 0) break;
        local_c = local_c + local_d;
        while (param_3 = pbVar2, local_d != 0) {
          *param_2 = bVar1;
          param_2 = param_2 + 1;
          local_d = local_d - 1;
        }
      }
      if (bVar1 != 0) break;
      param_2 = param_2 + ((uint)param_1 - (uint)local_c);
      local_c = 0;
      param_3 = pbVar2;
    }
    if (bVar1 == 1) break;
    if (bVar1 == 2) {
      param_2 = param_2 + (uint)param_1 * (uint)param_3[3] + (uint)(ushort)*pbVar2;
      local_c = local_c + *pbVar2;
      param_3 = param_3 + 4;
    }
    else {
      local_c = local_c + bVar1;
      param_3 = pbVar2;
      local_d = bVar1;
      while (local_d != 0) {
        *param_2 = *param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        local_d = local_d - 1;
      }
      if ((bVar1 & 1) != 0) {
        param_3 = param_3 + 1;
      }
    }
  }
  return;
}

