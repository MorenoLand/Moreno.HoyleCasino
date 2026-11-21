// FUN_0042de30  0042de30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042de30(void)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  double local_1c;
  
  dVar1 = _DAT_006b3e40;
  cVar2 = FUN_005cd8b0();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar4 = FUN_006377b0();
    local_1c = (double)iVar4;
    if (dVar1 <= _DAT_006b2c38) {
      local_1c = local_1c - local_1c * ((_DAT_006b2c38 - dVar1) / _DAT_006b2c38);
    }
    else {
      local_1c = (1.0 - local_1c) * ((dVar1 - _DAT_006b2c38) / _DAT_006b2c38) + local_1c;
    }
    iVar4 = FUN_0062fbf0(0x100);
    dVar1 = (double)iVar4;
    local_1c = local_1c * _PTR_006b6e18;
    uVar3 = CONCAT31((int3)(CONCAT22((short)((uint)iVar4 >> 0x10),
                                     (ushort)(local_1c < dVar1) << 8 |
                                     (ushort)(NAN(local_1c) || NAN(dVar1)) << 10 |
                                     (ushort)(local_1c == dVar1) << 0xe) >> 8),local_1c < dVar1 == 0
                    );
  }
  return uVar3;
}

