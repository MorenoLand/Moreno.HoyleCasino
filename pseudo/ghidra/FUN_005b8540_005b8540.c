// FUN_005b8540  005b8540

undefined1 __fastcall FUN_005b8540(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  cVar1 = FUN_005da830(param_1);
  if (cVar1 == '\0') {
    puVar3 = (undefined1 *)FUN_005b5fb0(0xffffffff);
    uVar2 = *puVar3;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

