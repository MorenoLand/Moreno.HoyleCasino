// FUN_0054a480  0054a480

void FUN_0054a480(void)

{
  uint *puVar1;
  uint uVar2;
  undefined1 local_1c [8];
  uint local_14;
  uint local_10;
  int local_c;
  undefined4 local_8;
  
  puVar1 = (uint *)FUN_005d0c30(local_1c,1);
  local_14 = *puVar1;
  local_10 = puVar1[1];
  uVar2 = local_14 & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  if (uVar2 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = 0x32;
  }
  local_c = (int)local_14 / 2;
  FUN_005d1420(local_c,local_8);
  return;
}

