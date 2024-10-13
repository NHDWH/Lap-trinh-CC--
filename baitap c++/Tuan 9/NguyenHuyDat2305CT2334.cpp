#include <iostream>
using namespace std;

// Cấu trúc cho node trong biểu đồ cây
struct TreeNode 
{
    int du_lieu;
    TreeNode* trai;
    TreeNode* phai;
};

// Hàm tạo node mới
TreeNode* tao_node_moi(int gia_tri) 
{
    TreeNode* node_moi = new TreeNode();
    if (node_moi != NULL) 
    {
        node_moi->du_lieu = gia_tri;
        node_moi->trai = NULL;
        node_moi->phai = NULL;
    }
    return node_moi;
}

// Hàm chèn node mới vào trong biểu đồ cây
TreeNode* chen_node_moi(TreeNode* goc, int gia_tri) 
{
    if (goc == NULL) 
    {
        return tao_node_moi(gia_tri);
    }
    if (gia_tri < goc->du_lieu) 
    {
        goc->trai = chen_node_moi(goc->trai, gia_tri);
    } else if (gia_tri > goc->du_lieu) 
    {
        goc->phai = chen_node_moi(goc->phai, gia_tri);
    }
    return goc;
}

// Hàm duyệt cây thứ tự trước
void duyet_truoc(TreeNode* goc) 
{
    if (goc != NULL) 
    {
        cout << goc->du_lieu << " ";
        duyet_truoc(goc->trai);
        duyet_truoc(goc->phai);
    }
}

// Hàm duyệt cây thứ tự giữa
void duyet_giua(TreeNode* goc) 
{
    if (goc != NULL) 
    {
        duyet_giua(goc->trai);
        cout << goc->du_lieu << " ";
        duyet_giua(goc->phai);
    }
}

// Hàm duyệt cây thứ tự sau
void duyet_sau(TreeNode* goc) 
{
    if (goc != NULL) 
    {
        duyet_sau(goc->trai);
        duyet_sau(goc->phai);
        cout << goc->du_lieu << " ";
    }
}

// Hàm tính độ cao của cây
int do_cao(TreeNode* goc) 
{
    if (goc == NULL) 
    {
        return 0;
    }
    int trai_cao = do_cao(goc->trai);
    int phai_cao = do_cao(goc->phai);
    return (trai_cao > phai_cao)? (trai_cao + 1) : (phai_cao + 1);
}

// Hàm đếm số lá trong cây
int dem_la(TreeNode* goc) 
{
    if (goc == NULL) 
    {
        return 0;
    }
    if (goc->trai == NULL && goc->phai == NULL) 
    {
        return 1;
    }
    return dem_la(goc->trai) + dem_la(goc->phai);
}

// Hàm tính kích thước của cây
int kich_thuoc(TreeNode* goc) 
{
    if (goc == NULL) 
    {
        return 0;
    }
    return 1 + kich_thuoc(goc->trai) + kich_thuoc(goc->phai);
}

// Hàm xóa node với giá trị cho trước khỏi cây
TreeNode* xoa_node(TreeNode* goc, int gia_tri) 
{
    if (goc == NULL) 
    {
        return goc;
    }
    if (gia_tri < goc->du_lieu) 
    {
        goc->trai = xoa_node(goc->trai, gia_tri);
    } else if (gia_tri > goc->du_lieu) 
    {
        goc->phai = xoa_node(goc->phai, gia_tri);
    } else 
    {
        // Trường hợp 1: Node cần xóa là lá
        if (goc->trai == NULL && goc->phai == NULL) 
        {
            delete goc;
            goc = NULL;
        }
        // Trường hợp 2: Node cần xóa có một con
        else if (goc->trai == NULL) 
        {
            TreeNode* temp = goc->phai;
            delete goc;
            return temp;
        } else if (goc->phai == NULL) 
        {
            TreeNode* temp = goc->trai;
            delete goc;
            return temp;
        }
        // Trường hợp 3: Node cần xóa có hai con
        else 
        {
            TreeNode* temp = goc->phai;
            // Tìm node nhỏ nhất trong subtree phải
            while (temp->trai!= NULL) 
            {
                temp = temp->trai;
            }
            goc->du_lieu = temp->du_lieu;
            goc->phai = xoa_node(goc->phai, temp->du_lieu);
        }
    }
    return goc;
}

// Hàm xóa toàn bộ cây
void xoa_toan_bo_cay(TreeNode* goc) 
{
    if (goc!= NULL) 
    {
        xoa_toan_bo_cay(goc->trai);
        xoa_toan_bo_cay(goc->phai);
        delete goc;
    }
}

int main() 
{
    TreeNode* goc = NULL;
    int lua_chon;
    int gia_tri;

    while (true) 
    {
        cout << "1. Tao cay " << endl;
        cout << "2. Chen node moi vao cay " << endl;
        cout << "3. Xoa node khoi cay " << endl;
        cout << "4. Duyet cay thu tu truoc " << endl;
        cout << "5. Duyet cay thu tu giua " << endl;
        cout << "6. Duyet cay thu tu sau " << endl;
        cout << "7. Tinh do cao cua cay " << endl;
        cout << "8. Dem so la trong cay " << endl;
        cout << "9. Tinh kich thuoc cua cay " << endl;
        cout << "10. Xoa toan bo cay " << endl;
        cout << "11. Thoat " << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> lua_chon;

        switch (lua_chon) 
        {
            case 1:
                cout << "Nhap gia tri cho node goc: ";
                cin >> gia_tri;
                goc = tao_node_moi(gia_tri);
                break;
            case 2:
                cout << "Nhap gia tri cho node moi: ";
                cin >> gia_tri;
                goc = chen_node_moi(goc, gia_tri);
                break;
            case 3:
                cout << "Nhap gia tri can xoa: ";
                cin >> gia_tri;
                goc = xoa_node(goc, gia_tri);
                break;
            case 4:
                cout << "Duyet cay thu tu truoc: ";
                duyet_truoc(goc);
                cout << endl;
                break;
            case 5:
                cout << "Duyet cay thu tu giua: ";
                duyet_giua(goc);
                cout << endl;
                break;
            case 6:
                cout << "Duyet cay thu tu sau: ";
                duyet_sau(goc);
                cout << endl;
                break;
            case 7:
                cout << "Do cao cua cay: " << do_cao(goc) << endl;
                break;
            case 8:
                cout << "So la trong cay: " << dem_la(goc) << endl;
                break;
            case 9:
                cout << "Kich thuoc cua cay: " << kich_thuoc(goc) << endl;
                break;
            case 10:
                xoa_toan_bo_cay(goc);
                goc = NULL;
                cout << "Cay da duoc xoa toan bo!" << endl;
                break;
            case 11:
                exit(0);
            default:
                cout << "Lua chon khong hop le!" << endl;
        }
    }
    return 0;
}