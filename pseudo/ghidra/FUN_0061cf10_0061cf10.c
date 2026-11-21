// FUN_0061cf10  0061cf10

void FUN_0061cf10(byte *param_1,int param_2,uint param_3,byte param_4)

{
  ushort local_c;
  uint local_8;
  
  local_8 = (uint)*param_1;
  if (local_8 == param_3) {
    *param_1 = param_4;
  }
  local_c = *(ushort *)(param_1 + 1);
  param_1 = param_1 + 3;
  while ((0 < param_2 && (local_c != 0))) {
    param_2 = param_2 - (uint)local_c;
    switch(local_8) {
    case 2:
      param_1 = param_1 + local_c;
      break;
    case 4:
      param_1 = param_1 + (uint)local_c * 2;
      break;
    case 8:
      param_1 = param_1 + 1;
      break;
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x20:
    case 0x40:
      param_1 = param_1 + local_c;
      break;
    case 0x82:
      param_1 = param_1 + (uint)local_c * 3;
      break;
    case 0x84:
      param_1 = param_1 + (uint)local_c * 4;
      break;
    case 0x88:
      param_1 = param_1 + 3;
    }
    if (0 < param_2) {
      local_8 = (uint)*param_1;
      if (local_8 == param_3) {
        *param_1 = param_4;
      }
      local_c = *(ushort *)(param_1 + 1);
      param_1 = param_1 + 3;
    }
  }
  return;
}

