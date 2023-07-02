<script type="text/javascript" src="http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML"></script>

<script type="text/x-mathjax-config">MathJax.Hub.Config({ tex2jax: {inlineMath: [['$', '$']]}, messageStyle: "none" });</script>

# **TỰ LUẬN**

### **CÂU 1** 

#### *(a) Chọn ngẫu nhiên một người trong làng. Xác suất để người này là người thật thà là bao nhiêu?*

- Theo đề ta có $0.6n$ **người thật thà** trong tổng số $n$ người trong làng. Vì vậy, xác suất để chọn một người thật thà là:
$$\frac{0.6n}{n} = 0.6 $$

#### *(b) Hỏi lần lượt n − 1 người còn lại liệu người được chọn trong câu (a) có phải là người thật thà hay không. Cần ít nhất bao nhiêu câu trả lời Có để xác định đây là người thật thà?*

- Dựa vào gợi ý ta **`nên ưu tiên những chiến lược mà phân tích được số lượng câu
hỏi`**

- TH1: Nếu người được chọn là **người thật thà** (những người thật thà khác sẽ trả lời *Có*, người xảo trá và Joker sẽ trả lời *Không*)
=> Số trả lời *Có* là:  $0.6n - 1$.

- TH2: Nếu người được chọn **không phải là người thật thà** (những người thật thà sẽ trả lời *Không*, những người xảo trá và Joker sẽ trả lời Có hoặc Không **một cách ngẫu nhiên**) 
=> Số câu trả lời Có sẽ không vượt quá số người không phải thật thà, tức là $0.4n$.

- Vậy để xác định **chắc chắn** người được chọn là người thật thà, ta cần ít nhất:
$0.6n - 1$ câu trả lời Có. Nếu số câu trả lời Có ít hơn, ta biết chắc chắn người đó không phải là người thật thà và ta phải chọn lại một người khác.

- Ngoài ra, ta **chỉ cần một câu trả lời "Có"** để xác định đây là người thật thà bởi nếu có một người thật thà nói "Có", thì người được chọn cũng phải là người thật thà, vì nếu người được chọn không phải là người thật thà, thì người thật thà sẽ nói "Không" . Tuy nhiên, ta cũng cần ít nhất một câu trả lời "Không" để loại trừ trường hợp không có ai trong làng là người thật thà.

#### *(c)  Nếu người được chọn không phải là người thật thà, ta lặp lại quá trình (a)và (b), tức chọn ngẫu nhiên một trong n người và đặt câu hỏi cho n − 1 người còn lại về người đó (xem như bỏ qua bất kì thông tin nào thu được từ bất kì lượt lặp nào trướcđó). Lặp lại việc này cho đến khi xác định được chắc chắn 1 người thật thà. Trong trường hợp xấu nhất, trung bình ta sẽ cần bao nhiêu câu hỏi?*

- Ta gọi $E(n)$ là số câu hỏi trung bình cần thiết để xác định được chắc chắn một người thật thà trong làng có $n$ người. Ta có công thức:
    
    $$E(n) = P * (n-1) + (1-P) * (n-1 + E(n))$$
    
    Trong đó :
    
    - $E(n)$ là số câu hỏi trung bình cần thiết để xác định được chắc chắn một người thật thà trong làng có n người.
    - $P$ là xác suất để ta **xác định được** chắc chắn người được chọn là thật thà sau khi hỏi $n-1$ câu hỏi.
    - $(1-P)$ là xác suất để ta **không xác định** được chắc chắn người được chọn là thật thà sau khi hỏi $n-1$ câu hỏi.
    - $P * (n-1)$ là số câu hỏi trung bình cần thiết khi ta **xác định được** chắc chắn người được chọn là thật thà  sau khi hỏi $n-1$ câu hỏi.
    - $(1-P) * (n-1 + E(n))$ là số câu hỏi trung bình cần thiết khi ta **không xác định được chắc chắn** người được chọn là thật thà sau khi hỏi $n-1$ câu hỏi. 
    
    > Trong trường hợp này, ta phải lặp lại quá trình (a) và (b), tức chọn ngẫu nhiên một trong n người và đặt câu hỏi cho $n-1$ người còn lại về người đó. Do đó, ta phải thêm $n-1$ câu hỏi cho lượt lặp hiện tại và $E(n)$ câu hỏi cho các lượt lặp tiếp theo.

    - Từ đây ta rút phương trình:
    
    $$E(n) = P * (n-1) + (1-P) * (n-1 + E(n))$$
    $$ <=> E(n) - (1-P) * E(n) = P * (n-1) + (1-P) * (n-1)$$
    $$ <=> P * E(n) - P * (1-P) * E(n) = P^2 * (n-1) + P * (1-P) * (n-1)$$ 
    $$ <=> P^2 * E(n) = (n - 1) * P $$
    $$ <=> E(n) = \frac{n-1}{P}  $$

    - Ngoài ra ta có thể giả sử xác suất để chọn ngẫu nhiên một người thật thà là xác suất để xác định được chắc chắn một người thật thà sau khi hỏi $n-1$ câu hỏi. Trong trường hợp xấu nhất, ta sẽ phải hỏi tất cả $n-1$ người còn lại mỗi khi ta chọn một người mới, và ta sẽ phải tiếp tục chọn lại cho đến khi bạn may mắn chọn được một người thật thà. Vì xác suất để chọn một người thật thà là 0.6, nên số lần ta chọn lại trung bình là $ 1/0.6 ≈ 1.67$. Do đó, số câu hỏi ta phải đặt trung bình trong trường hợp xấu nhất là $ (n-1)(1/0.6) ≈ 1.67(n-1)$ 

    - Tuy nhiên, điều quan trọng là ta chỉ có thể xác định được chắc chắn người thật thà khi bạn thấy có ít nhất một câu trả lời "Không" và tất cả các câu trả lời khác đều là "Đúng". Ta dùng Xác suất $0.6$ để tính số câu hỏi trung bình, nhưng xác suất đó không phản ánh được điều kiện để xác định được người thật thà.

    - Vì vậy, số câu hỏi ta cần hỏi trong trường hợp xấu nhất là:
    $$E(n) = \frac{n-1}{P}  $$

#### *(d). Liệu có chiến lược hỏi nào tối ưu hơn? Đề xuất và phân tích số lượng câu hỏi trung bình trong trường hợp xấu nhất.*

- Ta có thể nghĩ đến chiến lược chọn hai người bất kỳ và hỏi một người về người kia:

    - Bước 1: Chọn ngẫu nhiên một người và hỏi: "Trong số các bạn có bao nhiêu người thật thà?" Gọi câu trả lời là x.

    - Bước 2: Chọn ngẫu nhiên một người khác và hỏi: "Trong số các bạn có bao nhiêu người thật thà?" Gọi câu trả lời là y.

    - Bước 3: Nếu x = y, thì chọn ngẫu nhiên một người khác và hỏi: "Trong số các bạn có bao nhiêu người thật thà?" Gọi câu trả lời là z. Nếu x ≠ y, thì bỏ qua bước này.

    - Bước 4: xét từng trường hợp :
        + Nếu x = y = z => x (hoặc y hoặc z) là số người thật thà trong nhóm.
        + Nếu x ≠ y ≠ z => không có ai thật thà trong nhóm.
        + Nếu x = y ≠ z hoặc x ≠ y = z hoặc x ≠ z = y =>  chỉ có một người thật thà.
    - Bước 5: Lặp lại hết người trong làng.

Chiến lược này đảm bảo tìm được người thật thà nếu có, vì nếu gặp Joker, sẽ có ít nhất một lần Joker nói dối và chỉ ra người thật thà. Số lượng câu hỏi trung bình trong trường hợp xấu nhất là:

$$\frac{0.6n}{n} \times 1 + \frac{0.4n}{n} \times \left(1 + \frac{0.6n}{n-1} \times 1 + \frac{0.4n-1}{n-1} \times \left(1 + \frac{0.6n}{n-2} \times 1 + \frac{0.4n-2}{n-2} \times \left(\cdots\right)\right)\right)$$

$$= 1 + \frac{0.4}{0.6} + \frac{0.4^2}{0.6^2} + \cdots + \frac{0.4^{n-1}}{0.6^{n-1}}$$

$$= 1 + \frac{0.4}{0.6} \times \frac{1 - (0.4/0.6)^n}{1 - (0.4/0.6)}$$

$$\approx 2.5 - 1.67 (0.4/0.6)^n$$

Khi $n$ càng lớn, số lượng câu hỏi càng tiến gần đến $2.5$, tức là chỉ cần khoảng 3 câu hỏi là có thể tìm được người thật thà. Hay khi n càng lớn, số câu hỏi càng tiến gần đến $$0.6(n−2)$$

### **Trích nguồn** 

[Công cụ Bing](https://www.bing.com/search?form=MY0291&OCID=MY0291&q=Bing+AI&showconv=1&ntref=1)

[Bài toán nói thật nói dối](https://text.123docz.net/document/3537339-toan-logic-hay-va-phuong-phap-luan.htm)

[Bài toán logic nói dối - nói thật](https://anh135689999.violet.vn/entry/bai-toan-logic-noi-doi-noi-that-13342827.html)