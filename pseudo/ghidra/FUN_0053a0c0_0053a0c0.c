// FUN_0053a0c0  0053a0c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0053a0c0(undefined4 param_1)

{
  double dVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined8 local_14;
  double local_c;
  
  local_14 = 0;
  piVar2 = (int *)FUN_005daa20(local_1c);
  local_c = (double)*piVar2;
  FUN_005dcb00(param_1);
  iVar3 = FUN_005d5a50();
  dVar1 = (double)iVar3;
  uVar4 = (uint)(ushort)((ushort)(dVar1 < local_c) << 8 | (ushort)(NAN(dVar1) || NAN(local_c)) << 10
                        | (ushort)(dVar1 == local_c) << 0xe);
  if (dVar1 >= local_c) {
    piVar2 = (int *)FUN_005daae0(local_24);
    local_c = (double)*piVar2 / local_c;
    uVar5 = (ushort)(local_c < _DAT_006b3e40) << 8 |
            (ushort)(NAN(local_c) || NAN(_DAT_006b3e40)) << 10 |
            (ushort)(local_c == _DAT_006b3e40) << 0xe;
    uVar4 = (uint)uVar5;
    if (local_c >= _DAT_006b3e40) {
      uVar4 = CONCAT31((uint3)(byte)(uVar5 >> 8),1);
    }
  }
  return uVar4;
}

