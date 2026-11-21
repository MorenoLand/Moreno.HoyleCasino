// FUN_00559460  00559460

undefined1 __fastcall FUN_00559460(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 extraout_var;
  
  cVar1 = FUN_005594b0();
  if ((cVar1 != '\0') &&
     (iVar2 = FUN_00641280(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4))), iVar2 == 10)) {
    return 1;
  }
  return 0;
}

