// FUN_005b5950  005b5950

undefined1 __fastcall FUN_005b5950(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 local_10 [3];
  
  cVar1 = FUN_005da830(param_1);
  if (cVar1 == '\0') {
    local_10[0] = 1;
    local_10[1] = 3;
    local_10[2] = 0;
    iVar3 = FUN_005b5fb0(0xffffffff);
    uVar2 = *(undefined1 *)(local_10 + *(char *)(iVar3 + 10));
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}

