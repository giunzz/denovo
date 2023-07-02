# **TỰ LUẬN**

### **CÂU 2** 

#### *(a) Trung nhìn 3 viên kẹo và đoán chính xác vị của 2 viên. Hỏi nếu như Trung hoàn toàn đoán bừa thì xác suất của sự kiện này là bao nhiêu? Để xác minh rằng Trung có khả năng đoán kẹo thần kỳ, Linh đã thiết lập hai giả thuyết $H_0$ và $H_1$ . $H_0$ tương ứng với việc Trung chỉ đoán bừa. $H1$ tương ứng việc Trung có năng lực đặc biệt.*

- Theo đề Trung và Linh có một hộp kẹo gồm nhiều viên kẹo giống nhau với 5
hương vị khác nhau.

- Xác suất để đoán chính xác vị của một viên kẹo là $\frac{1}{5}$

- Các lần đoán của Trung là độc lập với nhau, tức là kết quả của lần đoán trước không ảnh hưởng đến kết quả của lần đoán sau.

- Nếu như Trung hoàn toàn đoán bừa thì xác suất của sự kiện này:

    - Xác suất để Trung đoán chính xác vị của viên kẹo đầu tiên là $\frac{1}{5}$.
    
    - Xác suất để Trung đoán chính xác vị của viên kẹo thứ hai là $\frac{1}{5}$.
    
    - Xác suất để Trung đoán sai vị của viên kẹo thứ ba là $\frac{4}{5}$ (vì có 4 vị kẹo còn lại mà Trung có thể đoán sai).
    
    - Vậy, xác suất để Trung đoán chính xác vị của 2 viên kẹo trong 3 viên là:

        - P(Trung đúng 2/3) = P(Trung đúng viên 1) x P(Trung đúng viên 2) x P(Trung sai viên 3) $= \frac{1}{5} * \frac{1}{5} * \frac{4}{5} = \frac{4}{125}$

#### *(b) Gọi Tn là số viên kẹo mà Trung đoán đúng trong n viên kẹo. Một đại lượng đáng quan tâm là $P(T_n ≥ t|H_0)$, nghĩa là xác suất của sự kiện “*số viên Trung đoán đúng trong n viên không ít hơn $t(T_n ≥ t)$ biết rằng Trung đoán bừa $(H_0)$*”. Linh nói rằng Linh sẽ tin vào giả thuyết $H_1$ và loại bỏ giả thuyết $H_0$ nếu như Trung đoán đúng được chính xác một lượng kẹo t trong n viên, sao cho $P(Tn ≥ t|H0)$ là rất nhỏ, cụ thể là bé hơn 5%. Hỏi nếu Trung đoán chính xác 2 trong 3 viên kẹo, liệu Linh có nên tin rằng Trung có khả năng thần kỳ không? Nếu Trung đoán chính xác 8 trên 10 viên kẹo thì sao?*

- Nhận xét: bài toán đưa ra giả thiết và ta cần kiểm tra giả thiết đấy. Vậy ta đầu tiên cần biết cách tính xác suất của sự kiện $T_n ≥ t$ khi biết Trung đoán bừa $(H_0)$.

- Theo [Bing](https://www.bing.com/) *để giải quyết vấ đề này ta có thể sử dụng [phân phối nhị thức](https://vi.wikipedia.org/wiki/Ph%C3%A2n_ph%E1%BB%91i_nh%E1%BB%8B_th%E1%BB%A9c) để tính xác suất này. Phân phối nhị thức là một phân phối xác suất cho số lần thành công trong n lần thử độc lập, khi mỗi lần thử chỉ có hai kết quả có thể (thành công hoặc thất bại) và xác suất thành công là như nhau*.

- Xác suất thành công khi Trung đoán bừa là $\frac{1}{5}$. Vậy công thức để tính xác suất của sự kiện **$Tn = t$** khi biết H_0 = $\frac{1}{5}$ là:

**$$P(Tn = t|H0) = C(n,t) * (1/5)^t * (4/5)^{(n-t)} $$**

- Trong đó:
    - $C(n,t)$: **tổ hợp chập t của n**, tức là số cách chọn ra t phần tử từ n phần tử, **không quan tâm đến thứ tự**

- Để tính xác suất của sự kiện $T_n ≥ t$ khi biết $H_0$, ta cần cộng các xác suất của các trường hợp. Nếu Trung đoán chính xác 2 trong 3 viên kẹo, ta có n = 3 và t = 2, n = 3 và t = 2, ta có:

$$P(T_n ≥ 2|H_0) = P(T_n = 2|H_0) + P(T_n = 3|H_0)$$

$$= C(3,2) * (1/5)^2 * (4/5)^1 + C(3,3) * (1/5)^3 * (4/5)^0 = \frac{13}{125}$$ 

- Tuy nhiên ngưỡng mà Linh đặt ra là 5%.

>Do đó, Linh không nên tin rằng Trung có khả năng thần kỳ khi Trung chỉ đoán chính xác 2 trong 3 viên kẹo.

- Nếu Trung đoán chính xác 8 trong 10 viên kẹo, ta có n = 10 và t = 8:

$$ D = P(T_n ≥ 8|H_0) = P(T_n = 8|H_0) + P(T_n = 9|H_0) + P(T_n = 10|H_0)$$

$$= C(10,8) * (1/5)^8 * (4/5)^2 + C(10,9) * (1/5)^9 * (4/5)^1 + C(10,10) * (1/5)^10 * (4/5)^0 = 0.000205$$

> Ta thấy $D > 5%$ lúc này Linh nên tin rằng Trung có khả năng thần kỳ khi Trung đoán chính xác 8 trong 10 viên kẹo.

#### *(c) Thế Anh bảo rằng Thế Anh sẽ tin vào giả thuyết $H_1$ nếu như xác suất xảy ra $H_0$ là rất thấp (bé hơn 5%). Long bảo rằng Long sẽ tin vào giả thuyết $H_1$ nếu như lựa chọn loại bỏ giả thuyết H0 có khả năng rất cao là lựa chọn đúng (lớn hơn 95%). Hỏi rằng tiêu chí của Linh, Long và Thế Anh có giống nhau hay không? Hãy giải thích rõ bằng cách viết ra các xác suất có điều kiện cần thiết.*

- Đây là một bài toán về kiểm định giả thuyết. Ta có thể tính xác suất có điều kiện cần thiết cho bài toán này như sau:

    - Xác suất để xảy ra $H_0$ khi biết *Trung đoán bừa* là $P(H_0|$ Trung đoán bừa $) = 1$

    - Xác suất để xảy ra $H_1$ khi biết *Trung có khả năng thần kỳ* là $P(H1|$ Trung có KNTK $) = 1$

    - Gọi Xác suất để loại bỏ $H_0$ khi biết $H_0$ ( [theo câu b](#b-gọi-tn-là-số-viên-kẹo-mà-trung-đoán-đúng-trong-n-viên-kẹo-một-đại-lượng-đáng-quan-tâm-là--nghĩa-là-xác-suất-của-sự-kiện-số-viên-trung-đoán-đúng-trong-n-viên-không-ít-hơn-biết-rằng-trung-đoán-bừa--linh-nói-rằng-linh-sẽ-tin-vào-giả-thuyết-và-loại-bỏ-giả-thuyết-nếu-như-trung-đoán-đúng-được-chính-xác-một-lượng-kẹo-t-trong-n-viên-sao-cho-là-rất-nhỏ-cụ-thể-là-bé-hơn-5-hỏi-nếu-trung-đoán-chính-xác-2-trong-3-viên-kẹo-liệu-linh-có-nên-tin-rằng-trung-có-khả-năng-thần-kỳ-không-nếu-trung-đoán-chính-xác-8-trên-10-viên-kẹo-thì-sao) ) đúng là P(loại bỏ $H_0|H_0$ đúng).

    - Gọi Xác suất để loại bỏ $H_0$ khi biết $H_1$ đúng là P(loại bỏ $H_0|H_1$ đúng).

- So sánh tiêu chí của Linh, Long và Thế Anh như sau:

    - Tiêu chí của *Linh* là P(loại bỏ $H_0|H_0$ đúng) < 5%
    
    - Tiêu chí của *Long* là P(loại bỏ $H_0|H_1$ đúng) > 95% 

    - Tiêu chí của *Thế Anh* là P($H_0$|Trung đoán bừa) < 5% 

- Linh sẽ loại bỏ giả thuyết $H_0$ khi nó *thực sự đúng*. Xác suất này phụ thuộc vào kết quả của Trung và ngưỡng xác suất cho trước. Nếu Trung *đoán chính xác* nhiều viên kẹo hơn ngưỡng cho phép, Linh sẽ loại bỏ giả thuyết $H_0$ và tin rằng *Trung có khả năng thần kỳ*.

- Long sẽ loại bỏ giả thuyết $H_0$ khi nó thực sự sai. Xác suất này cũng phụ thuộc vào kết quả của Trung và ngưỡng xác suất cho trước. Nếu Trung *đoán chính xác* nhiều viên kẹo hơn ngưỡng cho phép, Long cũng sẽ loại bỏ giả thuyết $H_0$ và tin rằng Trung có khả năng thần kỳ.

>Vậy, ta có thể kết luận rằng tiêu chí của Linh và Long có *giống nhau*, vì cả đều loại bỏ giả thuyết $H_0$ và tin rằng *Trung có khả năng thần kỳ*.

>Tuy nhiên, tiêu chí của Thế Anh khác với Linh và Long vì nó dựa trên một xác suất có điều kiện không hợp lý. Tức là xác suất để giả thuyết $H_0$ đúng khi biết Trung đoán bừa. Nên đay là một xác suất không hợp lý, vì giả thuyết $H_0$ chính là Trung đoán bừa.=> xác suất này luôn gần bằng 1, và không phụ thuộc vào kết quả của Trung. Nếu dùng tiêu chí này, Thế Anh sẽ *không bao giờ tin* rằng Trung có khả năng thần kỳ, dù Trung có đoán chính xác bao nhiêu viên kẹo.

### **Trích nguồn**

[Công cụ Bing](https://www.bing.com/search?form=MY0291&OCID=MY0291&q=Bing+AI&showconv=1&ntref=1)

[Kiểm tra giả định](#https://vi.wikipedia.org/wiki/Ki%E1%BB%83m_%C4%91%E1%BB%8Bnh_gi%E1%BA%A3_thuy%E1%BA%BFt_th%E1%BB%91ng_k%C3%AA)

[Phân phối xác suất đồng thời](https://vi.wikipedia.org/wiki/Ph%C3%A2n_ph%E1%BB%91i_x%C3%A1c_su%E1%BA%A5t_%C4%91%E1%BB%93ng_th%E1%BB%9Di)
