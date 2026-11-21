// FUN_00616ed0  00616ed0

void FUN_00616ed0(byte *param_1,uint *param_2,uint *param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  int local_48;
  exception local_44 [12];
  exception local_38 [12];
  void *local_2c;
  int local_28;
  int local_24;
  void *local_20;
  byte *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  byte *local_c;
  byte *local_8;
  
  local_10 = (void *)0x0;
  local_c = param_1;
  local_8 = param_1 + *param_1 + 0x12;
  lVar1 = (ulonglong)((uint)*(ushort *)(param_1 + 0xc) * (uint)*(ushort *)(param_1 + 0xe)) * 4;
  local_2c = operator_new(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  local_10 = local_2c;
  if (local_c[2] != 2) {
    std::exception::exception(local_38);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_38,(ThrowInfo *)&DAT_006ffe04);
  }
  local_14 = 0;
  do {
    if ((int)(uint)*(ushort *)(local_c + 0xe) <= local_14) {
      *param_4 = local_2c;
      *param_2 = (uint)*(ushort *)(local_c + 0xc);
      *param_3 = (uint)*(ushort *)(local_c + 0xe);
      return;
    }
    if ((local_c[0x11] & 0x20) == 0) {
      local_48 = (*(ushort *)(local_c + 0xe) - 1) - local_14;
    }
    else {
      local_48 = local_14;
    }
    local_18 = local_48;
    local_20 = (void *)((int)local_2c + (uint)*(ushort *)(local_c + 0xc) * local_14 * 4);
    iVar2 = (uint)*(ushort *)(local_c + 0xc) * local_48 * (uint)local_c[0x10];
    local_1c = local_8 + ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3);
    if (local_c[0x10] == 0x18) {
      for (local_28 = 0; local_28 < (int)(uint)*(ushort *)(local_c + 0xc); local_28 = local_28 + 1)
      {
        *(byte *)((int)local_20 + local_28 * 4) = local_1c[2];
        *(byte *)((int)local_20 + local_28 * 4 + 1) = local_1c[1];
        *(byte *)((int)local_20 + local_28 * 4 + 2) = *local_1c;
        *(undefined1 *)((int)local_20 + local_28 * 4 + 3) = 0xff;
        local_1c = local_1c + 3;
      }
    }
    else {
      if (local_c[0x10] != 0x20) {
        std::exception::exception(local_44);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_44,(ThrowInfo *)&DAT_006ffe04);
      }
      for (local_24 = 0; local_24 < (int)(uint)*(ushort *)(local_c + 0xc); local_24 = local_24 + 1)
      {
        *(byte *)((int)local_20 + local_24 * 4) = local_1c[2];
        *(byte *)((int)local_20 + local_24 * 4 + 1) = local_1c[1];
        *(byte *)((int)local_20 + local_24 * 4 + 2) = *local_1c;
        *(byte *)((int)local_20 + local_24 * 4 + 3) = local_1c[3];
        local_1c = local_1c + 4;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

