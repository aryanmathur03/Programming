# real code for Flipkart


# import requests
# from bs4 import BeautifulSoup

# home = "https://www.flipkart.com/"
# path = "https://www.flipkart.com/search?q="
# product = input("Enter the product name: ")
# path += product.replace(" ", "+")

# headers = {"User-Agent": "Mozilla/5.0"}
# response = requests.get(path, headers=headers)
# data = BeautifulSoup(response.text, 'html.parser')  

# # Extract product names and prices
# p_name =data.find ("div" , class_="KzDlHZ")
# print(p_name.text)
# p_price =  data.find ("div" , class_="Nx9bqj _4b5DiR")
# print (p_price.text)
# features_ul = data.find("ul",class_="G4BRas")
# f_list = features_ul.findAll("li")

# for i in range(len(f_list)):
#     print(i+1,".",f_list[i].text) 



# Example for amazon

import requests
from bs4 import BeautifulSoup

home = "https://www.amazon.in/"
path = "https://www.amazon.in/s?k="
product= input("enter the peoduct name :")
path += product.replace(" ","+")

headers = {"user-agent": "Mozilla/5.0"}
response = requests.get(path, headers=headers)
data = BeautifulSoup(response.text, 'html.parser')

p_name =data.find ("h2" , class_="a-size-medium")
print(p_name.get_text(strip=True))
p_price =  data.find ("span" , class_="a-price-whole")
print (p_price.get_text(strip=True))


features = product.find("div", id="feature-bullets")
for li in features.find_all("span", class_="a-list-item"):
            text = li.get_text(strip=True)
            if text:
                print("-", text)





# import requests
# from bs4 import BeautifulSoup

# product = input("Enter the product name: ")
# search_url = f"https://www.amazon.in/s?k={product.replace(' ', '+')}"

# headers = {
#     "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64)",
#     "Accept-Language": "en-US,en;q=0.9",
# }

# response = requests.get(search_url, headers=headers)

# # Check if request was successful
# if response.status_code != 200:
#     print("Failed to fetch page. Status code:", response.status_code)
# else:
#     soup = BeautifulSoup(response.text, "html.parser")

#     # Debug: Uncomment to see part of the HTML
#     # print(soup.prettify()[:1000])

#     # Get all products listed
#     products = soup.find_all("div", {"data-component-type": "s-search-result"})

#     if not products:
#         print("No products found. Possible bot detection or page structure change.")
#     else:
#         for product in products[:1]:  # limit to first product
#             title_tag = product.find("span", class_="a-size-medium")
#             price_tag = product.find("span", class_="a-price-whole")

#             if title_tag and price_tag:
#                 print("Product Title:", title_tag.get_text(strip=True))
#                 print("Product Price: ₹" + price_tag.get_text(strip=True))
#             else:
#                 print("Title or price not found in product block.")
