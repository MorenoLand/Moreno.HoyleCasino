// FUN_0061d290  0061d290

void FUN_0061d290(int param_1,int param_2,int param_3,int param_4,int param_5,undefined1 *param_6,
                 undefined1 *param_7,undefined1 *param_8)

{
  undefined1 *puVar1;
  int local_10;
  ushort local_c;
  undefined1 *local_8;
  
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 1;
  if ((param_4 < *(short *)(*(int *)(param_3 + 4 + param_1 * 8) + param_2 * 0x10)) &&
     (param_5 < *(short *)(*(int *)(param_3 + 4 + param_1 * 8) + 2 + param_2 * 0x10))) {
    local_10 = param_4;
    puVar1 = *(undefined1 **)
              (*(int *)(*(int *)(param_3 + 4 + param_1 * 8) + 0xc + param_2 * 0x10) + param_5 * 4);
    *param_8 = *puVar1;
    local_c = *(ushort *)(puVar1 + 1);
    while ((local_8 = puVar1 + 3, (int)(uint)local_c <= local_10 && (local_c != 0))) {
      local_10 = local_10 - (uint)local_c;
      switch(*param_8) {
      case 2:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x20:
      case 0x40:
        local_8 = local_8 + local_c;
        break;
      case 4:
        local_8 = local_8 + (uint)local_c * 2;
        break;
      case 8:
        local_8 = puVar1 + 4;
      }
      *param_8 = *local_8;
      puVar1 = local_8;
      local_c = *(ushort *)(local_8 + 1);
    }
    if (local_c == 0) {
      *param_6 = 0;
      *param_8 = 1;
    }
    else {
      switch(*param_8) {
      case 1:
        *param_6 = 0;
        break;
      case 2:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x20:
      case 0x40:
        *param_6 = local_8[local_10];
        break;
      default:
        break;
      case 4:
        *param_6 = local_8[local_10 * 2];
        *param_7 = (local_8 + local_10 * 2)[1];
        break;
      case 8:
        *param_6 = *local_8;
      }
    }
  }
  return;
}

