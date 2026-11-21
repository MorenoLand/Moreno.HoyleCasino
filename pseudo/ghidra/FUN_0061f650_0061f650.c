// FUN_0061f650  0061f650

void __thiscall FUN_0061f650(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  void *pvVar4;
  undefined4 local_28;
  undefined1 local_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x31c) == 0) {
    pvVar4 = operator_new(0x80000);
    *(void **)(param_1 + 0x31c) = pvVar4;
    memset(*(void **)(param_1 + 0x31c),0,0x80000);
    *(undefined2 *)(param_1 + 0x308) = 0;
  }
  local_8 = 0;
  do {
    if (param_4 * param_3 <= local_8) {
      return;
    }
    for (local_c = local_8; local_c < local_8 + param_3; local_c = local_c + 1) {
      uVar2 = *(uint *)(param_2 + local_c * 4);
      uStack_19 = (char)(uVar2 >> 0x18);
      if (uStack_19 != '\0') {
        local_1c = (char)uVar2;
        uStack_1b = (byte)(uVar2 >> 8);
        uStack_1a = (byte)(uVar2 >> 0x10);
        piVar1 = (int *)(*(int *)(param_1 + 0x31c) +
                        (((int)(uVar2 & 0xff) >> 2) * 0x800 + ((int)(uint)uStack_1b >> 2) * 0x20 +
                        ((int)(uint)uStack_1a >> 3)) * 4);
        *piVar1 = *piVar1 + 1;
        if (*(ushort *)(param_1 + 0x308) < 0x100) {
          bVar3 = false;
          for (local_28 = 0; local_28 < (int)(uint)*(ushort *)(param_1 + 0x308);
              local_28 = local_28 + 1) {
            if (((*(char *)(param_1 + 8 + local_28 * 3) == local_1c) &&
                (*(byte *)(param_1 + 9 + local_28 * 3) == uStack_1b)) &&
               (*(byte *)(param_1 + 10 + local_28 * 3) == uStack_1a)) {
              bVar3 = true;
              break;
            }
          }
          if (!bVar3) {
            *(char *)(param_1 + 8 + (uint)*(ushort *)(param_1 + 0x308) * 3) = local_1c;
            *(byte *)(param_1 + 9 + (uint)*(ushort *)(param_1 + 0x308) * 3) = uStack_1b;
            *(byte *)(param_1 + 10 + (uint)*(ushort *)(param_1 + 0x308) * 3) = uStack_1a;
            *(short *)(param_1 + 0x308) = *(short *)(param_1 + 0x308) + 1;
          }
        }
      }
    }
    local_8 = local_8 + param_3;
  } while( true );
}

