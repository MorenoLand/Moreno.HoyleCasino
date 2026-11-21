// FUN_005fecb0  005fecb0

int FUN_005fecb0(void)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_005feda0();
  if (iVar1 == 0) {
    local_c = 0;
  }
  else {
    FUN_005ff080(0);
    local_c = FUN_005f5550();
    FUN_005ff080(0);
    iVar1 = FUN_005eb470();
    local_c = local_c + iVar1;
  }
  return local_c;
}

