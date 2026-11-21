// FUN_005c0349  005c0349

void FUN_005c0349(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(*(int *)(unaff_EBP + -0x208) + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x230) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x230) =
         *(int *)(*(int *)(unaff_EBP + -0x208) + 8) - *(int *)(*(int *)(unaff_EBP + -0x208) + 4) >>
         2;
  }
  *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + *(int *)(unaff_EBP + -0x230);
  if (*(int *)(*(int *)(unaff_EBP + -0x208) + 4) != 0) {
    *(undefined4 *)(unaff_EBP + -0xf0) = *(undefined4 *)(*(int *)(unaff_EBP + -0x208) + 8);
    *(undefined4 *)(unaff_EBP + -0xec) = *(undefined4 *)(*(int *)(unaff_EBP + -0x208) + 4);
    *(undefined4 *)(unaff_EBP + -0xe8) = *(undefined4 *)(unaff_EBP + -0xf0);
    *(undefined4 *)(unaff_EBP + -0xe4) = *(undefined4 *)(unaff_EBP + -0xec);
    *(undefined1 *)(unaff_EBP + -0xdd) = *(undefined1 *)(unaff_EBP + -0xde);
    *(int *)(unaff_EBP + -0xf8) =
         *(int *)(*(int *)(unaff_EBP + -0x208) + 0xc) - *(int *)(*(int *)(unaff_EBP + -0x208) + 4)
         >> 2;
    *(undefined4 *)(unaff_EBP + -0xf4) = *(undefined4 *)(*(int *)(unaff_EBP + -0x208) + 4);
    operator_delete(*(void **)(unaff_EBP + -0xf4));
  }
  *(int *)(*(int *)(unaff_EBP + -0x208) + 0xc) =
       *(int *)(unaff_EBP + -0x20) + *(int *)(unaff_EBP + -0x18) * 4;
  *(int *)(*(int *)(unaff_EBP + -0x208) + 8) =
       *(int *)(unaff_EBP + -0x20) + *(int *)(unaff_EBP + 0x10) * 4;
  *(undefined4 *)(*(int *)(unaff_EBP + -0x208) + 4) = *(undefined4 *)(unaff_EBP + -0x20);
  FUN_005c06d1();
  return;
}

